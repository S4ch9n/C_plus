//check given number is prime or not :

#include <iostream>
using namespace std;

void checkPrime(int n) {
    if (n <= 1) { // Handle edge cases for numbers less than or equal to 1
        cout << n << " is not prime";
        return;
    }

    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if ((n / i) != i) count++; // Count the counterpart divisor
        }
    }

    if (count == 2) 
        cout << n << " is prime";
    else 
        cout << n << " is not prime";
}

int main() {
    int n;
    cin >> n;
    checkPrime(n);
    return 0;
}
