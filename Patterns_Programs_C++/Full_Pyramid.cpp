// Write a program to print full Pyramid pattern
// Print the full Pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter a number n: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
