#include<iostream>
using namespace std;

int main() {
    // Integer Data Types
    int myInt = 10;                // Integer (whole number) - stores whole numbers without decimals
    long myLong = 100000L;          // Long - stores larger integer values
    short myShort = 5;              // Short - stores smaller integer values
    unsigned int myUnsignedInt = 20; // Unsigned integer - stores only positive whole numbers
    cout << "Integer: " << myInt << endl;
    cout << "Long: " << myLong << endl;
    cout << "Short: " << myShort << endl;
    cout << "Unsigned Int: " << myUnsignedInt << endl;
    
    // Floating-point Data Types
    float myFloat = 3.14f;           // Float - stores floating point numbers with single precision
    double myDouble = 3.141592653589793; // Double - stores floating point numbers with double precision
    long double myLongDouble = 3.141592653589793238462643383279L; // Long double - stores extended floating-point numbers
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Long Double: " << myLongDouble << endl;
    
    // Character Data Types
    char myChar = 'A';              // Char - stores a single character (enclosed in single quotes)
    wchar_t myWChar = L'A';         // Wide Char - stores larger character sets (wide characters)
    cout << "Char: " << myChar << endl;
    cout << "Wide Char: " << myWChar << endl;
    
    // Boolean Data Type
    bool myBool = true;             // Bool - stores either true or false values
    cout << "Boolean: " << myBool << endl;
    
    // String Data Type
    string myString = "Hello, World!"; // String - stores sequences of characters (text)
    cout << "String: " << myString << endl;
    
    // Pointer Data Type
    int* myPointer = &myInt;        // Pointer - stores the memory address of a variable
    cout << "Pointer to int: " << myPointer << endl;
    cout << "Dereferencing pointer: " << *myPointer << endl;
    
    // Typecasting
    double myDoubleValue = 10.56;
    int myIntValue = (int)myDoubleValue;  // Typecasting double to int (loss of decimal)
    cout << "Typecasted Double to Int: " << myIntValue << endl;

    return 0;
}
