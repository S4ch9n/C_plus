#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 9, 4, 5};   // Array of 10 ints, first 4 initialized, rest default to 0

    // --- Array and pointer basics ---
    cout << "address of first memory block is " << arr << endl;     // arr decays to &arr[0]
    cout << "address of first memory block is " << &arr[0] << endl; // explicitly address of first element
    cout << "address of first memory block is " << &arr[0] << endl; // same as above
    cout << *arr << endl;       // value at index 0 (1)
    cout << *(arr + 1) << endl; // value at index 1 (9)
    cout << (*arr) + 1 << endl; // first gets value at arr[0] (1), then adds 1 → 2

    // --- sizeof with arrays ---
    int temp[10];
    cout << sizeof(temp) << endl;  // total size of array = 10 * sizeof(int) = 40 (if int = 4 bytes)

    // --- sizeof with pointers ---
    int *ptr = &temp[0];           
    cout << sizeof(ptr) << endl;   // size of pointer itself (8 bytes on 64-bit, 4 on 32-bit)
    cout << sizeof(*ptr) << endl;  // size of what ptr points to = sizeof(int) = 4
    cout << sizeof(&ptr) << endl;  // size of address of pointer = size of int** = still 8 on 64-bit
    cout << sizeof(&temp) <<endl;
}
