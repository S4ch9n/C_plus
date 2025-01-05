// case 3 : Number pyramid with increment number 
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the number of rows

    // Outer loop: Controls the number of rows
    // Runs from 1 to 'n', meaning it iterates 'n' times
    for (int i = 1; i <= n; i++) {
        // Inner loop: Prints numbers in the current row
        // Runs from 1 to 'i', so the number of numbers increases in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print the current number 'j' with a space
        }
        cout << endl; // Move to the next line after printing all numbers in the row
    }

    return 0; // End of program
}


