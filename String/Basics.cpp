#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

bool compareString(string a, string b){
    if(a.length()!= b.length()){
        return false;
    }
        for(int i=0; i< a.length();i++) {
           if(a[i] != b[i]){
            return false;
           }
        }
    return true;
}


int main() {

//     // string str="";     // empty string
//      string str;
//     cout<< "Enter the str: ";
//     // cin>> str;
//     getline(cin, str);

//     cout<< str<< endl;

//     cout<< "Length: " << str.length()<<endl;

//     cout<< "Empty: " << str.empty()<<endl;

//     str.push_back('A');
//     cout << "After push back: "<< str<< endl;

//     str.pop_back();

//     cout<< "After pop back: "<< str<< endl;

//     cout<< "Substring: "<< str.substr(4, 8)<<endl;;

//     cout<< "Original : "<< str<<endl;

// cout<< "-------------------------------------"<<endl;

    string a = "Akshay";
    string b = "Akshay";

    // if(a.compare(b)==0){
    //     cout << "a and b are same string"<<endl;
    // }else
    // cout <<"a and b are not same string"<<endl;

    // cout<< "-------------------------------------"<<endl;

    cout<< compareString(a, b);
    
    // if(!true){
    //     cout<< "not Equal: "<<endl;
    // }
    // else
    // cout<< "equal; ";


    return 0;
}