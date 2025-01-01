#include <iostream> // Header file for input and output stream
#include <string>    // Header file for the string class
using namespace std; // Allows using standard library names without prefixing them with std::

int main() {
    string str; // Declare a string variable to store the user input

    // Use getline to read a full line of input, including spaces
    // `cin` alone would stop reading at the first space, but getline reads until a newline
    getline(cin, str);

    // Output the string that was entered by the user
    cout << str;

    return 0; // Indicate successful program termination
}



//2
#include <iostream> // For input and output
#include <string>   // For string handling
using namespace std;

int main() {
    string s1; // Declare a string variable s1
    string s2; // Declare a string variable s2

    // Assign hardcoded values to the strings
    s1 = "hello my name is John";
    s2 = "hello my name is Mike"; 

    // Output the strings
    cout << s1 << endl  << s2; // Print s1 followed by a newline  

    return 0; // Indicate successful program termination
}

