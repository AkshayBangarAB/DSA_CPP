// write a program to reverse a given string
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   string c = "Akshay";
   string s;
   char ch;

    for(int i=0; i<c.length();i++){
     ch = c.at(i);
     s = ch+s;
    }
   cout<< s;
    return 0;
}