// case 1 :
#include <iostream>
using namespace std;

int main()
{
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
    for (int i = 0; i < str.length(); i++)
    { // Using str.length() for dynamic string length
        cout << str[i] << endl;
    }

    return 0;
}

// case 2 :
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence >>>>>>>>>>>>>>> ";
    getline(cin, str); // Reads the entire line, including spaces
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl; // Prints each character on a new line
    }
    return 0;
}

#include <iostream>
#include <string> // For std::string
using namespace std;

int main()
{
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
    if (pos != string::npos)
    {
        cout << "'World' found at position: " << pos << endl;
    }
    else
    {
        cout << "'World' not found" << endl;
    }

    // Replace part of the string
    cppStr.replace(6, 5, "Everyone"); // Replace "World" with "Everyone"
    cout << "Modified String: " << cppStr << endl;

    return 0;
}

// string::substr
// substr : creates a new string by copying a portion of the orignal

#include <iostream>
#include <string>

int main()
{
    std::string str = "We think in generalities, but we live in details.";
    // (quoting Alfred N. Whitehead)

    string str2 = str.substr(3, 5); // "think"

    size_t pos = str.find("live"); // position of "live" in str

    string str3 = str.substr(pos); // get from "live" to the end
    cout << str2 << ' ' << str3 << '\n';
    string s = "HelloWorld";
    //          0123456789

    s.substr(0, 5); // "Hello"   → from index 0, take 5 chars
    s.substr(5, 5); // "World"   → from index 5, take 5 chars
    s.substr(5);    // "World"   → from index 5 till END
    s.substr(2, 3); // "llo"     → from index 2, take 3 chars
    s.substr(0, 1); // "H"       → just first char

    // find()
    string s = "HelloWorld";
    //          0123456789

    s.find("World"); // 5  → "World" starts at index 5
    s.find("Hello"); // 0  → starts at index 0
    s.find('o');     // 4  → first 'o' at index 4
    s.find("xyz");   // string::npos (not found)
    s.find('o', 5);  // 6  → search 'o' starting from index 5

    // replace
    // s.replace(start, length, newStr);

    s.replace(5, 5, "C++"); // "HelloC++"
    //        ↑  ↑    ↑
    //     from  how  replace
    //     idx   many  with

    s.replace(0, 5, "Hi"); // "HiWorld"

    return 0;
}

// string conversion
#include <iostream>
using namespace std;
int main()
{
    // STRING → NUMBER

    string s = "123";
    int x = stoi(s);                     // 123 (string to int)
    double d = stod("3.14");             // 3.14 (string to double)
    long long l = stoll("999999999999"); // big numbers

    // NUMBER → STRING
    int n = 42;
    string s1 = to_string(n);    // "42"
    string s2 = to_string(3.14); // "3.140000"
    string s = "123";
    int x = stoi(s);                     // 123 (string to int)
    double d = stod("3.14");             // 3.14 (string to double)
    long long l = stoll("999999999999"); // big numbers
}

// question
#include <iostream>
using namespace std;

int main()
{
    string s = "Hello123World";
    int count = 0;

    for(char& c : s){
        if(isdigit(c)) count++;
    }
    cout << count << endl;
}