#include<iostream>
using namespace std;
//function are set of code which perform something for you 
//function are used to modularize code
//function are used to read readability 
//function are used to use same code multiple times

//function types :
//void : which doest not return anything
//return
//parameterized
//non-parameterize
int main(){
  cout << "Function>>>>>>>>";
  return 0;
}


//void function example
#include<iostream>
using namespace std;

// Step 1: Define a void function to print the first name
void fName() {
    cout << "First name is John and "; // Prints the first name
}

// Step 2: Define another void function to print the last name
void lName() {
    cout << "last name is wick."; // Prints the last name
}

int main() {
    // Step 3: Call the function to print the first name
    fName();
    
    // Step 4: Call the function to print the last name
    lName();
    
    return 0; // Indicate successful program termination
}



#include<iostream>
using namespace std;

// Step 1: Define a parameterized function to print a greeting with a name
void printName(string name1) {
    cout << "Hey " << name1 << endl; // Prints the greeting followed by the name
}

int main() {
    string name1, name2; // Step 2: Declare two string variables to store names

    // Step 3: Read the first name from the user (allows spaces)
    getline(cin, name1);

    // Step 4: Read the second name from the user (allows spaces)
    getline(cin, name2);

    // Step 5: Call the function to print the greeting for the first name
    printName(name1);

    // Step 6: Call the function to print the greeting for the second name
    printName(name2);

    return 0; // Indicate successful program termination
}


//non-parameterized function
#include<iostream>
using namespace std;

// Step 1: Define a non-parameterized function
void greet() {
    cout << "Hello! Welcome to the program." << endl; // Prints a greeting message
}

int main() {
    // Step 2: Call the non-parameterized function
    greet();

    return 0; // Indicate successful program termination
}


#include<iostream>
using namespace std;

// Step 1: Define a return-type function to calculate the sum of two numbers
int sumNum(int n1, int n2) {
    int res; // Declare a variable to store the result
    res = n1 + n2; // Compute the sum of n1 and n2
    return res; // Return the result to the caller
}

int main() {
    int num1, num2; // Step 2: Declare variables to store user inputs
    int total;      // Variable to store the result from the function

    // Step 3: Prompt the user to enter two numbers
    cout << "Enter two numbers: " << endl;

    // Step 4: Take two numbers as input from the user
    cin >> num1 >> num2;

    // Step 5: Call the return-type function and store the result
    total = sumNum(num1, num2);

    // Step 6: Display the result in a formatted way
    cout << num1;

    return 0;
}
#include<iostream>
using namespace std;

// Step 1: Define a return-type function to calculate the sum of two numbers
int sumNum(int n1, int n2) {
    return n1 + n2; // Compute and return the sum directly
}

int main() {
    int num1, num2; // Step 2: Declare variables to store user inputs
    int total;      // Variable to store the result from the function

    // Step 3: Prompt the user to enter two numbers
    cout << "Enter two numbers: ";

    // Step 4: Take two numbers as input from the user
    cin >> num1 >> num2;

    // Step 5: Call the return-type function and store the result
    total = sumNum(num1, num2);

    // Step 6: Display the result in a formatted way
    cout << num1 << " + " << num2 << " = " << total << endl;

    return 0; // Indicate successful program termination
}





//in-built function
//minimum
#include<iostream>
using namespace std;

int main() {
    int a, b; // Step 1: Declare two integer variables to store user input

    // Step 2: Take two integers as input from the user
    cin >> a >> b;

    // Step 3: Use the built-in min function to find the smaller of the two numbers
    int minimum = min(a, b);

    // Step 4: Use the built-in max function to find the larger of the two numbers
    int maximum = max(a, b);

    // Step 5: Display the minimum and maximum values
    cout << "Minimum is " << minimum << endl
         << "And maximum number is " << maximum;

    return 0; // Indicate successful program termination
}


#include<iostream>
using namespace std;

// Step 1: Define a function to find the greatest of two numbers
int maxx(int n1, int n2) {
    if (n1 > n2) { // Check if the first number is greater than the second
        return n1; // If true, return the first number
    }
    return n2; // Otherwise, return the second number
}

int main() {
    int num1, num2; // Step 2: Declare variables to store user inputs

    // Step 3: Prompt the user to enter two numbers
    cout << "Enter two numbers: ";

    // Step 4: Take two numbers as input from the user
    cin >> num1 >> num2;

    // Step 5: Display the input numbers
    cout << num1 << " , " << num2 << endl;

    // Step 6: Call the function to find the greatest number and store the result
    int result = maxx(num1, num2);

    // Step 7: Display the greatest number
    cout << "The greatest number is: " << result;

    return 0; // Indicate successful program termination
}


//pass by value 
#include <iostream>
using namespace std;

// Step 1: Define a function to manipulate the value of 'a' locally
int sum(int a) {
    // Print the initial value of 'a' in the function
    cout << "Value of a is: " << a << endl;

    // Increment 'a' by 10 and print the updated value
    a += 10;
    cout << "Value of a is: " << a << endl;

    // Increment 'a' by 5 and print the updated value
    a += 5;
    cout << "Value of a is: " << a << endl;

    return 0; // Return 0 to indicate successful execution
}

int main() {
    int a = 10; // Step 2: Declare and initialize a variable 'a' in the main function

    // Step 3: Call the 'sum' function with 'a' as an argument
    sum(a);

    // Step 4: Print the value of 'a' in the main function after calling 'sum'
    cout << "Value of a is: " << a << endl;

    return 0; // Indicate successful program termination
}


//pass by reference
#include <iostream>
using namespace std;

// Step 1: Define a function that takes a reference to an integer
void modifyValue(int &num) {
    cout << "Initial value of num: " << num << endl;

    num += 10; // Modify the value of the referenced variable
    cout << "Value of num after adding 10: " << num << endl;

    num *= 2; // Further modify the value
    cout << "Value of num after doubling: " << num << endl;
}

int main() {
    int value = 5; // Step 2: Declare and initialize an integer variable

    // Step 3: Call the function and pass the variable by reference
    modifyValue(value);

    // Step 4: Display the modified value in the main function
    cout << "Final value of value in main: " << value << endl;

    return 0; // Indicate successful program termination
}
 


 //arrays in function
//pass by reference
 