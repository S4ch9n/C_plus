#include <iostream>
#include <algorithm> // Needed for for_each
using namespace std;

// Function to print even numbers
void printEven(int n) {
  if(n % 2 == 0) {
    cout << n << " ";
  }
}

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6 ,7 , 8, 9, 10};

  // Apply printEven to each element of the array
  for_each(arr, arr + 5, printEven);

  return 0;
}
