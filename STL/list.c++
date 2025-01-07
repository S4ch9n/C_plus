//In C++, a list is a container provided by the Standard Template Library (STL) that implements a doubly-linked list. Unlike vectors, which provide random access, lists excel at operations like insertion and deletion at any position, as they don't require shifting elements.

// Key Features of list
// Dynamic size: The size of the list can grow or shrink dynamically.
// Efficient insertion and deletion:
// Insertion/deletion in the middle or at the ends is efficient (O(1)).
// No shifting of elements is required.
// Bidirectional Iteration: Provides forward and reverse iterators.
// No direct random access: Accessing an element by index is not supported (e.g., list[i] is invalid).


// Basic Operations
// Here are some commonly used methods for the list class:

// push_back(value): Adds an element to the end.
// push_front(value): Adds an element to the front.
// pop_back(): Removes the last element.
// pop_front(): Removes the first element.
// insert(iterator, value): Inserts an element at the specified position.
// erase(iterator): Removes an element at the specified position.
// clear(): Removes all elements.
// size(): Returns the number of elements in the list.
// front() / back(): Access the first/last element.
// sort(): Sorts the elements.
// reverse(): Reverses the order of elements.

#include <iostream>
#include <list>
using namespace std;

void demonstrateList() {
    // Initialize a list
    list<int> myList = {10, 20, 30};

    // Add elements
    myList.push_back(40);  // Add 40 at the end
    myList.push_front(5);  // Add 5 at the front

    // Display the list
    cout << "List elements: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Remove elements
    myList.pop_back();  // Remove last element
    myList.pop_front(); // Remove first element

    // Display the list after removal
    cout << "After pop operations: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Insert at a specific position
    auto it = myList.begin();
    advance(it, 1);  // Move iterator to the second position
    myList.insert(it, 15);  // Insert 15 at the second position

    // Erase an element
    myList.erase(it);  // Remove the element at the iterator position

    // Display the list after insert and erase
    cout << "After insert and erase: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Sort and reverse the list
    myList.sort();
    cout << "Sorted list: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    myList.reverse();
    cout << "Reversed list: ";
    for (int val : myList) {
        cout << val << " ";
    } 
    cout << endl;

    // Size of the list
    cout << "Size of the list: " << myList.size() << endl;

    // Clear the list
    myList.clear();
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateList();
    return 0;
}
