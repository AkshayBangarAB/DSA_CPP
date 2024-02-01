#include <iostream>
using namespace std;

int main (){
    int val;
    cout << "Enter a number n: ";
    cin >> val;
    switch (val)
    {
    case 1 : cout << false;
        break;

    case 2 :if (true)
    {
        cout << "How are you";
    }
        break;
    case 3 : cout << "Akshay";
        break;
    case 4 : cout << "Good";
        break;
    case 5 : cout << "Bad";
        break;
    default: cout << val;
        break;
    }
}