// case 6 : triangle
//     *
//    ***
//   *****
//  *******
// *********          

#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the size of the pattern

    // Outer loop: Controls the number of rows
    // Runs from 0 to n-1, iterating 'n' times
    for (int i = 0; i < n; i++) {
        
        // Inner loop: Prints spaces before the stars in each row
        // The number of spaces decreases as the row index 'i' increases
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print a single space
        }

        // Inner loop: Prints stars in each row
        // The number of stars increases as the row index 'i' increases
        // Formula: (2 * i + 1) stars are printed for the 'i-th' row
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*"; // Print a single star
        }

        // Inner loop: Prints spaces after the stars in each row
        // (This is optional, as these spaces are not necessary for the pattern.)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print a single space
        }

        cout << endl; // Move to the next line after finishing the row
    }

    return 0; // End of program
}


//Code Explanation:
// Outer Loop (for (int i = 0; i < n; i++))

// This loop controls the number of rows.
// Each row contains spaces, stars, and optionally more spaces, printed in sequence.
// Spaces Before Stars (for (int j = 0; j < n - i - 1; j++))

// The number of spaces printed before the stars is n - i - 1.
// As i increases, the number of spaces decreases, creating the left alignment for the pyramid shape.
// Stars (for (int j = 0; j < 2 * i + 1; j++))

// The number of stars printed in the i-th row is 2 * i + 1.
// This ensures the number of stars grows symmetrically with each row, forming a pyramid shape.
// Spaces After Stars (for (int j = 0; j < n - i - 1; j++))

// Although this loop is included, it is redundant because the trailing spaces are not visible due to the line break (endl).
// cout << endl

// After finishing all spaces and stars for a row, move to the next line to start the next row.