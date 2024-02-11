    #include <iostream>
    #include <vector>
    #include <string.h>
    using namespace std;
    
    
    string reverseOnlyLetters(string s) {
        int i=0;
        int j= s.length()-1;

        while(i<j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }

    int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // string ans = reverseOnlyLetters(s);
    cout<< reverseOnlyLetters(s)<<endl;
        
        return 0;
    }