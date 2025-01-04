//case 1 :
#include <iostream>
using namespace std;

int main() {
    string str = "hello";

    // Printing the characters through index values
    cout << "Characters using index values:" << endl;
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;

    // Printing the characters using a loop
    cout << "Characters using a loop:" << endl;
    for (int i = 0; i < str.length(); i++) { // Using str.length() for dynamic string length
        cout << str[i] << endl;
    }

    return 0;
}


//case 2 :
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence >>>>>>>>>>>>>>> ";
    getline(cin, str); // Reads the entire line, including spaces
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl; // Prints each character on a new line
    }
    return 0;
}


#include <iostream>
#include <string> // For std::string
using namespace std;

int main() {
    // Declare and initialize a C++ string
    string cppStr = "Hello";

    // Append another string
    cppStr += " World";

    // Print the string
    cout << "C++ String: " << cppStr << endl;

    // Get the length of the string
    cout << "Length: " << cppStr.length() << endl;

    // Access individual characters
    cout << "First character: " << cppStr[0] << endl;

    // Find a substring
    size_t pos = cppStr.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // Replace part of the string
    cppStr.replace(6, 5, "Everyone"); // Replace "World" with "Everyone"
    cout << "Modified String: " << cppStr << endl;

    return 0;
}
