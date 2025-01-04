//arrays is a collection of element of same datatype stored in a contiguous memory allocation.
//index start from 0 for the first element , and for the element the index will be n - 1 , means if we have 5 elements present in the array , then the index of the first element will be 0 , nd the last element will be 4. 

#include <iostream>
using namespace std;

int main() {
  int arr[3]; // Declare an array of size 3 to store integers

  // Take input for all three elements of the array
  cin >> arr[0] >> arr[1] >> arr[2];

  // Print the second element of the array
  cout << arr[1] << endl;

  // Add 10 to the second element of the array and print the updated value
  arr[1] += 10; 
  cout << arr[1] << endl;

  // Replace the third element of the array with the value 5 and print it
  arr[2] = 5; 
  cout << arr[2] << endl;

  return 0; // End of the program
}


//1-D array 
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 1D array
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the elements of the 1D array
    cout << "1D Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify an element
    arr[2] = 100;

    // Print the updated array
    cout << "Updated 1D Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


//2-D arrays 
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the elements of the 2D array
    cout << "2D Array elements:" << endl;
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    // Modify an element
    matrix[1][1] = 100; // Update the element at row 1, column 1

    // Print the updated 2D array
    cout << "Updated 2D Array elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


