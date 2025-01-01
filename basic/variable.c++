#include <iostream>  // Includes the iostream library for input and output operations
//#include<bits/stdc++.h> // Includes all standard C++ libraries (generally not recommended for practice, as it's too broad and can slow down compilation)
using namespace std;  // Allows usage of standard functions (like cin and cout) without the need to prefix them with 'std::'

int main() {
    int x, y;  // Declare two integer variables 'x' and 'y' to store user inputs

    // Use cin to take input from the user
    // Purpose: cin is used to read values from the standard input (keyboard) and store them in 'x' and 'y'
    cin >> x >> y;  // The >> operator is called the extraction operator and reads the values into 'x' and 'y'

    // Use cout to display the value of 'x' entered by the user
    // Purpose: Outputs the message "value of x is " followed by the value of 'x'
    cout << "value of x is " << x << endl;  // Outputs the value of 'x' and moves to the next line

    return 0;  // Indicates successful program termination
}
