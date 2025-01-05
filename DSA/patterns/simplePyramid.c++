// case 2 : simple pyramid
// *
// * * 
// * * * 
// * * * * 
// * * * * * 

#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the size of the triangle
    cin >> n; // Get the number of rows from the user

    // Outer loop: Controls the number of rows (runs 'n' times)
    // For each value of 'i', we print 'i + 1' stars in that row
    for (int i = 0; i < n; i++) {
        // Inner loop: Controls the number of stars in the current row
        // Runs from 0 to 'i', so the number of stars increases as 'i' grows
        for (int j = 0; j <= i; j++) {
            cout << " * "; // Print a star
        }
        cout << endl; // Move to the next line after finishing the row
    }

    return 0; // End of program
}
 