//case 7 : inverted triangle
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the size of the pattern

    // Outer loop: Controls the number of rows
    for (int i = 0; i < n; i++) {
        
        // Inner loop: Prints spaces before the stars in each row
        // The number of spaces increases as the row index 'i' increases
        for (int j = 0; j < i; j++) {
            cout << " "; // Print a single space
        }

        // Inner loop: Prints stars in each row
        // The number of stars decreases as the row index 'i' increases
        // Formula: 2 * (n - i) - 1 stars are printed in each row
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*"; // Print a single star
        }

        // Inner loop: Prints spaces after the stars in each row (optional)
        for (int j = 0; j < i; j++) {
            cout << " "; // Print a single space
        }

        cout << endl; // Move to the next line after finishing a row
    }

    return 0; // End of program
}

