// Give an array Find the common element

#include <iostream>
#include <vector>
using namespace std;
vector<int> findCommon(int *a, int *b, int *c, int n1, int n2, int n3){
    vector<int> commonElement;
    int i=0, j=0, k = 0;

    while(i < n1 && j < n2 && k < n3){
        if(a[i] == b[j] && b[j] == c[k]){
            commonElement.push_back(a[i]);
            i++;
            j++;
            k++;
        }
         else if(a[i]< b[j]){
            i++;
        }
        else if(b[j] < c[k]){
            j++;
        }else{
            k++;
        }
    }
 return commonElement;
}
int main(){

int n1 = 5, n2 = 7, n3 = 8;
   int a[] = {1,3,5,6,12};
   int b[] = {2,3,4,5,12,17,18};
   int c[] = {3,4,11,12,13,15,19,20};

  vector<int> commonElement = findCommon(a,b,c,n1,n2,n3);
   if(!commonElement.empty()){
    cout<< "Common Elements: ";
    for(auto value : commonElement){
        cout << value<< " ";
    }
    cout << endl;
   }else {
    cout<< "No Common Elements Found"<<endl;
   }
return 0;
}