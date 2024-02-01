#include <iostream>
using namespace std;

float getAreaofCircle(int r){
    float ans;
    ans = (3.14) * r * r;
    return ans;
}

int main (){
    int r;
    cout << " Enter the value of r: ";
    cin >> r;
    float areaCircle = getAreaofCircle(r);
    cout << "The area of circle is: "<< areaCircle << endl;
}