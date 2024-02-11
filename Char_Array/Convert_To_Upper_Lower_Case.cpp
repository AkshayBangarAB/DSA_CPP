#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
class Solution{
    public:

    // Program to convert Stirng into UpperCase without inbuilt function
void convertTOUpperCase(char ch[]){
    int n = strlen(ch);
    for(int i=0; i<n; i++){
        if(ch[i] >= 'a'&& ch[i] <= 'z'){
        ch[i] = ch[i]-'a'+'A';          // a = 97  and A = 65   == -32
    }
    }
}
   
    // Program to convert Stirng into LowerCase without inbuilt function
void convertTOLowerCase(char ch[]){
    int n = strlen(ch);
    for(int i=0; i<n; i++){
        if(ch[i] >= 'A'&& ch[i] <= 'Z'){
        ch[i] = ch[i]-'A'+'a';          // A = 65  and a = 97   == 32
    }
    }
}
};
int main() {

    char ch[100];
    cout<< "Enter a Name: ";
    cin.getline(ch, 50);

    Solution ob;
    ob.convertTOUpperCase(ch);;
    cout <<"Upper case: "<<ch<<endl;
    
    ob.convertTOLowerCase(ch);
    cout <<"Lower case: "<<ch<<endl;

    return 0;
}

