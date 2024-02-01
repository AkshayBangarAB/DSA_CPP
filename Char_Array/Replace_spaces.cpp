// Write a program to replace the spaces of the sentence by characters

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void replaceSpaces(char sentance[]){
    int i=0;
    int n = strlen(sentance);

    for(int i =0; i<n; i++){
        if(sentance[i] == ' '){
            sentance[i] = '@';
    }
    }
}
int main() {

    char sentance[100];
    cout<< "Enter sentence: "<< endl;
    
    cin.getline(sentance, 100);

    replaceSpaces(sentance);
    cout << sentance<<endl;
    
    return 0;
}