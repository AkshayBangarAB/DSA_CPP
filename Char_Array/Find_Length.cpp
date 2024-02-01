// Write a program to find the length of char array manually

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int getLength(char name[]){
    int length =0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
return length;
}
int main() {

    char name[100];
    // cin>> name;
    cout<< "Enter the name: "<<endl;
    cin.getline(name, 20);

   int ans = getLength(name);
   cout <<"Length is: "<<ans << endl;
   cout<<"length is :"<< strlen(name)<<endl;


   return 0;
}