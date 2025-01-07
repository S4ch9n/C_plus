
// In C++, a deque (short for double-ended queue) is a container in the Standard Template Library (STL) that provides fast insertion and deletion at both ends. It is implemented as a dynamic array that allows efficient operations at both the front and the back.

// Key Features of deque
// Dynamic Size: Like vector, it can dynamically grow or shrink in size.
// Efficient Operations:
// O(1) insertion and deletion at both ends.
// Random access (similar to vector) is supported.
// Bidirectional Iterators: Allows forward and reverse iteration.
// Memory Management: Unlike vector, deque does not require shifting elements when inserting/deleting at the front.
// Common Operations
// Here are some commonly used methods for the deque class:

// push_back(value): Adds an element to the back.
// push_front(value): Adds an element to the front.
// pop_back(): Removes the last element.
// pop_front(): Removes the first element.
// insert(iterator, value): Inserts an element at the specified position.
// erase(iterator): Removes an element at the specified position.
// clear(): Removes all elements.
// size(): Returns the number of elements in the deque.
// front() / back(): Access the first/last element.
// at(index): Access element at the specified index.
// []: Random access using square brackets.

#include <iostream>
#include <deque>
using namespace std;

void defineDeque() {
    // Initialize a deque with some initial values
    deque<int> myDeque = {10, 20, 30}; // Creates a deque containing 10, 20, 30

    // Adding elements to the deque
    myDeque.push_back(40);  // Adds 40 to the back of the deque
    myDeque.push_front(5);  // Adds 5 to the front of the deque

    // Display the contents of the deque
    cout << "Deque elements: ";
    for (int val : myDeque) {  // Iterate through the deque
        cout << val << " ";    // Print each element
    }
    cout << endl;

    // Removing elements from the deque
    myDeque.pop_back();  // Removes the last element (40)
    myDeque.pop_front(); // Removes the first element (5)

    // Display the deque after pop operations
    cout << "After pop operations: ";
    for (int val : myDeque) {  // Iterate through the deque
        cout << val << " ";    // Print each element
    }
    cout << endl;

    // Accessing the first and last elements
    cout << "First element: " << myDeque.front() << endl; // Access the first element (10)
    cout << "Last element: " << myDeque.back() << endl;   // Access the last element (30)

    // Inserting an element at a specific position
    auto it = myDeque.begin();        // Get an iterator pointing to the beginning of the deque
    myDeque.insert(it + 1, 25);       // Insert 25 at the second position (after 10)

    // Erasing an element at a specific position
    myDeque.erase(it + 1);            // Erase the element at the second position (25)

    // Display the deque after insert and erase operations
    cout << "After insert and erase: ";
    for (int val : myDeque) {  // Iterate through the deque
        cout << val << " ";    // Print each element
    }
    cout << endl;

    // Demonstrating random access using `at()` and `[]`
    myDeque.push_back(50); // Add 50 to the back of the deque
    myDeque.push_back(60); // Add 60 to the back of the deque
    cout << "Element at index 1 using at(): " << myDeque.at(1) << endl; // Access the element at index 1 (20)
    cout << "Element at index 2 using []: " << myDeque[2] << endl;      // Access the element at index 2 (30)

    // Checking the size of the deque
    cout << "Size of the deque: " << myDeque.size() << endl; // Output the number of elements in the deque

    // Clearing all elements from the deque
    myDeque.clear(); // Removes all elements from the deque
    cout << "Is the deque empty? " << (myDeque.empty() ? "Yes" : "No") << endl; // Check if the deque is empty
}

int main() {
    // Call the function to demonstrate deque operations
    defineDeque();
    return 0;
}
