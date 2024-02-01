#include <iostream>
using namespace std;

char getGrade(int marks){

switch (marks/10)
{
case 10 : return 'A';break;    
case 9 : return 'A'; break;
case 8 : return 'B'; break;
case 7 : return 'C'; break;
case 6 : return 'D'; break;
case 5 : return 'E'; break;
default: return 'F'; break;
}


    // if (marks >=90)
    // return 'A';
    // else if(marks>= 80)

    // return 'B';
    // else if(marks>= 70)

    // return 'C';
    // else if(marks>= 60)
    // return 'D';

    // else if(marks>= 80)
    // return 'E';

    // else 
    // return 'F';

}

int main(){
    int marks;
    // cout << "Enter the marks: ";
    // cin >> marks;
    // cout << getGrade(marks);

    for (int i=0; i<=100; i++){
    char finalGrade  = getGrade(i);
    cout << "Your Grade for marks "<< i<< " is: " <<finalGrade << endl; 
    } 

} 