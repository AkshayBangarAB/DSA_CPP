// Write a program to reverse the given character array (char array)

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int getLength(char name[]){
    int i=0;
    int length=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n-1;
    while (i<=j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main() {

    char name[100];
    cout<< "Enter the name: "<<endl;
    // cin>> name;
    cin.getline(name, 50);
    
    cout <<"Initialy char Array: "<< name<< endl;
    reverseCharArray(name);

    cout<<"Reverse Char Array: "<< name;

    return 0;
}