// print all divisor : which completely divide the given number

#include <iostream>
using namespace std;

void divisorNumber(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int n;
  cin >> n;
  divisorNumber(n);
  return 0;
}

// another approach

#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

// Function to find and print divisors
void printDivisor(int n) {
    vector<int> ls; // To store the divisors

    // Step 1: Loop to find divisors up to sqrt(n)
    for (int i = 1; i * i <= n; i++) {  // Loop runs from 1 to sqrt(n)
        if (n % i == 0) {              // If i is a divisor of n
            ls.push_back(i);           // Add i to the list of divisors
            if (n / i != i) {          // If i is not the square root of n
                ls.push_back(n / i);   // Add the paired divisor (n / i)
            }
        }
    }

    // Step 2: Sort the divisors in ascending order
    sort(ls.begin(), ls.end());

    // Step 3: Print the divisors
    for (auto it : ls) cout << it << " "; // Print each divisor
    cout << endl; // Add a newline after printing all divisors
}

int main() {
    int n;
    cout << "Enter a number: "; // Prompt the user to enter a number
    cin >> n;                   // Read the input number
    printDivisor(n);            // Call the function to print divisors
    return 0;
}
