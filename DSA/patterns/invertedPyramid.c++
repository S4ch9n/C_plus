// case 4 : inverted pyramid 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows and columns
    cin >> n; // Take input from the user for the size of the pattern

    // Outer loop: Controls the number of rows
    // The loop runs from 1 to 'n', so it iterates 'n' times
    for (int i = 1; i <= n; i++) {
        // Inner loop: Controls the number of stars printed in the current row
        // It starts from 'n' and decreases by 1 each time, stopping at 'i'
        // This creates a pattern with decreasing number of stars in each row
        for (int j = n; j >= i; j--) {
            cout << " * "; // Print a star followed by a space
        }
        cout << endl; // Move to the next line after finishing a row
    }

    return 0; // End of program
}

//another way
#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the size of the pattern

    // Outer loop: Controls the number of rows
    // The loop runs from 'n' down to 0, so it iterates 'n+1' times
    for (int i = n; i >= 0; i--) {
        // Inner loop: Controls the number of stars printed in the current row
        // It starts from 1 and runs up to 'i', printing 'i' stars in each row
        for (int j = 1; j <= i; j++) {
            cout << " * "; // Print a star followed by a space
        }
        cout << endl; // Move to the next line after finishing a row
    }

    return 0; // End of program
}

//inverted pyramid numbers
#include <iostream> // For input and output
using namespace std;

int main() {
    int n; // Variable to store the number of rows
    cin >> n; // Take input from the user for the size of the pattern

    // Outer loop: Controls the number of rows
    // Runs from 1 to 'n', iterating 'n' times
    for (int i = 1; i <= n; i++) {
        // Inner loop: Controls the numbers printed in each row
        // Starts from 1 and runs up to 'n - i + 1'
        // The number of elements decreases as 'i' increases

        // Inner loop: Prints spaces after the stars in each row (optional)
        for (int j = 1; j <= n - i + 1; j++) { 
            cout << j << " "; // Print the current number 'j' with a space
        }
        cout << endl; // Move to the next line after finishing a row
    }

    return 0; // End of program
}
