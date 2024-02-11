// Remove all adjacent duplicates in string

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        string str ="";
        int i=0;
        while( i<s.length()){
            if(str.length() > 0){

               if(str[str.length()-1] == s[i]){
               str.pop_back();
               }
                else{
                str.push_back(s[i]);
                }
            }
             else{
                str.push_back(s[i]);
            }
            i++;
        }
        return str;
    }
};


int main() {
  string s;
  getline(cin, s);
  
  Solution ob;

  cout<< ob.removeDuplicates(s);;
    
    return 0;
}