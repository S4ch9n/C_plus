//*
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the size of the triangle
    cin >> n; // Take input from the user for the size of the triangle

    // Outer loop: Controls the number of rows
    // The loop runs from 0 to (2 * n - 1), generating 2n-1 rows
    for (int i = 0; i <= 2 * n - 1; i++) {
        int stars = i; // Variable to calculate the number of stars to print

        // If the current row index 'i' exceeds 'n', adjust the star count
        // After reaching the middle row, the number of stars starts decreasing
        if (i > n) 
            stars = 2 * n - i;

        // Inner loop: Prints stars in each row
        // The number of stars printed is equal to the value of 'stars'
        for (int j = 1; j <= stars; j++) {
            cout << "*"; // Print a single star
        }

        cout << endl; // Move to the next line after finishing the row
    }

    return 0; // End of program
}
