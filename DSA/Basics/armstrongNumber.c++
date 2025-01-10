//What is an Armstrong Number?
// An Armstrong number (also known as a Narcissistic number, pluperfect digital invariant, or PPDI) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <iostream>
#include <cmath> // For pow() function
using namespace std;

void checkArmstrongNumber(int n) {
    int original = n; // Preserve the original number
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits
    int temp = n;
    while (temp > 0) {
        numDigits++;
        temp = temp / 10;
    }

    // Calculate the sum of each digit raised to the power of numDigits
    temp = n;
    while (temp > 0) {
        int lastDigit = temp % 10; // Extract last digit
        sum += pow(lastDigit, numDigits); // Add digit^numDigits to sum
        temp = temp / 10; // Remove last digit
    }

    // Check if the sum matches the original number
    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkArmstrongNumber(n);
    return 0;
}



//another approach
#include <iostream>
#include <cmath> // For pow() function
using namespace std;

void armstrongNumber(int n) {
    int dup = n; // Copying the value of n
    int sum = 0; // To store the sum of digits raised to the power of numDigits
    int numDigits = 0;

    // Calculate the number of digits
    int temp = n;
    while (temp > 0) {
        numDigits++;
        temp = temp / 10;
    }

    // Calculate the sum of each digit raised to the power of numDigits
    temp = n;
    while (temp > 0) {
        int lastDigit = temp % 10; // Extracting the last digit
        sum = sum + pow(lastDigit, numDigits); // Raise to power of numDigits ,if lastDigit = 4 and numDigits = 4, pow(4, 4) computes 4^4 = 256
        temp = temp / 10; // Removing the last digit
    }

    // Check if the sum matches the original number
    if (sum == dup) {
        cout << dup << " is an Armstrong number";
    } else {
        cout << dup << " is not an Armstrong number";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    armstrongNumber(n);
    return 0;
}
