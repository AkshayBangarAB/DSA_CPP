// Write a program to check the given string is palindrome or not

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

bool isPalindrome(char word[]){
    int i=0;
    int n = strlen(word);
    int j= n-1;

    while (i<=j)
    {
        if(word[i]!= word[j]){
            return false;
        }
        else{
            i++;
            j--;
        } 
   }
    return true;
}
int main() {

    char word[100];
    cout << "Enter Word:";
    cin>> word;

    bool ans= isPalindrome(word);
    cout<< "word: "<<word<<" is:"<<ans << endl;

    return 0;
}