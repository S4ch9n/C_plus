// case 1 : simple pyramid 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
 
#include <iostream> // Includes the iostream library to handle input and output
using namespace std; // Allows usage of the standard namespace to avoid prefixing with std::

// Main function - entry point of the program
int main() {
    int n; // Variable to store the size of the square pattern
    cin >> n; // Takes input from the user for the size of the pattern

    // Outer loop: Iterates 'n' times, corresponding to the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop: Iterates 'n' times for each iteration of the outer loop,
        // corresponding to the number of columns in the current row
        for (int j = 0; j < n; j++) {
            cout << " * "; // Outputs an asterisk followed by spaces
        }
        cout << endl; // Moves to the next line after printing one row of asterisks
    }

    return 0; // Returns 0 to indicate successful program execution
}





