#include<iostream>
using namespace std;

int count(int n){
  int count = 0;
  while(n > 0){
    count = count + 1;
    n = n /10;
  } 
  return count;
}

int main(){
  int n ,result; 
  cout << "Enter numbers : ";
  cin >> n;
   result = count(n);
  cout << "counts of digits are : " << result;

  return 0;
}

// Recursive C++ program to count number of
// digits in a number
#include <iostream>
using namespace std;

int countDigit(int n) {
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

int main() {
   int n = 58964;
    cout << countDigit(n);
    return 0;
}

//another approach
//#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Handle the special case for zero
    if (x == 0) return 1;

    // Take the absolute value of x to handle negative numbers
    x = abs(x); // abs(x): The abs function ensures the code works for both positive and negative numbers. 

    // Initialize count to 0
    int count = 0;

    // Loop to count digits
    while(x > 0){
        count = count + 1;  // Increment count
        x = x / 10;         // Remove last digit
    }
    
    return count; // Return total count
}
// Input: 
// 𝑋=−12345
// After x = abs(x), 
// X=12345.



