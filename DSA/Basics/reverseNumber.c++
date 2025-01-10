#include <iostream>
using namespace std;

int reverseNum(int n) {
    int reverseNum = 0;  // Initialize reversed number
    int lastDigit = 0;   // Initialize last digit

    // Loop to extract digits and construct the reversed number
    while (n > 0) {
        lastDigit = n % 10;             // Extract the last digit
        n = n / 10;                    // Remove the last digit from n
        reverseNum = (reverseNum * 10) + lastDigit; // Update reversed number
    }

    return reverseNum; // Return the final reversed number
}

int main() {
    int n;

    // Input from the user
    cout << "Enter a number: " << endl;
    cin >> n;

    // Get the reversed number and display it
    int reversed = reverseNum(n);
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}


//another approach
#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int revNum = 0;
    while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}

int main() {
    int n = 4562;
    cout << reverseDigits(n);
    return 0;
}

