#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void solve(int *p){
    *p = *p + 10;
    cout <<"Inside fun address stored at p is: "<< p <<endl;
    cout <<"Inside fun address of p is: "<< &p <<endl;
    cout<< "Inside the function value of a is: "<<*p<< endl;

}
int main() {

    // int arr[4] = {10,20,30,40};
// // In array the address of all the following is same 
//     cout<< "The address of arr : "<< &arr << endl;
//     cout<< "The value of aar is :"<< arr<< endl;
//     cout << "The address of first element is: "<< &arr[0]<<endl;


// // In pointers the value and address are different 

//     int *p = arr;
//     cout << "The value of p is: "<< p << endl;
//     cout << "The address of p is :"<< &p<< endl;
//     cout << "The value of p is :"<< *p<< endl;

    //   cout<< *arr<< endl;
    //   cout<< *arr + 1<<endl;   //this line add the 1 number in the element 10 +1;
    //   cout << *(arr+1)<<endl;   // this line print the value of second arr element 20
    //  cout << *(arr+3)<<endl;    // this line print the value of fourth arr element 40

// // the cout Implementation is different for char array and array 
//     char ch[10]= "akshay";
//     char* c = ch;
//     cout<< c << endl;

//    int arr[4] = {10,20,30,40};
//    int* p = arr;
//    cout << p << endl;

// good practice
// char ch[15]= "Akshay Bnagar";
// cout<< ch<< endl;

// Bad Practice 
// char* c = "Akshay Bangar";
// cout << c<< endl;



int a = 5;
cout << "Address of a is: "<<&a<<endl;
int* ptr = &a;
cout << "Address stored in ptr is: "<< ptr<< endl;
cout << "Address of ptr is: "<< &ptr<< endl;
cout <<"Before the function calling Value is : "<< *ptr << endl;

solve(ptr);
cout << "After function calling: " << *ptr << endl;

    return 0;
}