// case 4 : number pyramid with with same numbers in column 

// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5
#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the number of rows

    // Outer loop: Controls the number of rows
    // Runs from 1 to 'n', iterating 'n' times
    for (int i = 1; i <= n; i++) {
        // Inner loop: Controls the number of elements in the current row
        // Runs from 1 to 'i', so the number of elements in each row equals 'i'
        for (int j = 1; j <= i; j++) {
            cout << i << " "; // Print the value of 'i', with a space between elements
        }
        cout << endl; // Move to the next line after printing all elements in the row
    }

    return 0; // End of program
}


