//check palindrome

//palindrome means the reverse order of number will be same as the original number

#include <iostream>
using namespace std;

// Function to check if a given number is a palindrome
bool checkPalindrome(int n) {
    // Negative numbers are not palindromes
    if (n < 0) 
        return false;

    // Variable to store the reversed number
    int revNum = 0;

    // Make a copy of the original number to compare later
    int dup = n;

    // Reverse the digits of the number
    while (n > 0) {
        // Extract the last digit of the number
        int lastDigit = n % 10;

        // Add the digit to the reversed number, shifting existing digits to the left
        revNum = revNum * 10 + lastDigit;

        // Remove the last digit from the original number
        n = n / 10;
    }

    // Compare the reversed number with the original number
    // Return true if they are equal (palindrome), false otherwise
    return revNum == dup;
}

int main() {
    // Variable to store user input
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to check if the number is a palindrome
    if (checkPalindrome(n)) {
        // If true, print that the number is a palindrome
        cout << n << " is a palindrome." << endl;
    } else {
        // If false, print that the number is not a palindrome
        cout << n << " is not a palindrome." << endl;
    }

    // Return 0 to indicate successful program termination
    return 0;
}


int main() {
    int n = 121;

    if (checkPalindrome(n)) {
        cout << n << " is a palindrome.";
    } else {
        cout << n << " is not a palindrome.";
    }

    return 0;
}


//2nd approach
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int revNum = 0;
    int dup = n;

    // Reverse the number
    while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }

    // Check if the number is a palindrome
    if (revNum == dup) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0; // Indicate successful program termination
}

