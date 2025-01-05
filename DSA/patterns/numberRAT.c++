// 1
// 01
// 101
// 0101
// 10101

#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the size of the pattern

    int start; // Variable to determine the starting value for each row

    // Outer loop: Controls the number of rows
    for (int i = 0; i < n; i++) {
        // Determine the starting value for the current row
        // If the row index 'i' is even, start with 1
        // If the row index 'i' is odd, start with 0
        if (i % 2 == 0) 
            start = 1;
        else 
            start = 0;

        // Inner loop: Controls the number of elements in the current row
        // The number of elements in each row is equal to the row index + 1
        for (int j = 0; j <= i; j++) {
            cout << start; // Print the current value of 'start'
            start = 1 - start; // Toggle between 1 and 0
        }

        cout << endl; // Move to the next line after finishing the row
    }

    return 0; // End of program
}
