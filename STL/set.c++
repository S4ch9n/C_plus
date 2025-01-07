// In C++, a set is a container in the Standard Template Library (STL) that stores unique elements in a sorted order (by default, ascending). Sets are implemented as balanced binary search trees, typically a Red-Black Tree.

// Key Features of set
// Unique Elements: A set automatically removes duplicate elements.
// Sorted Order:
// By default, elements are stored in ascending order.
// A custom comparator can be used for different orderings.
// Efficient Operations:
// O(log n) for insertion, deletion, and searching.
// Iterators:
// Supports bidirectional iterators for traversal.
// Underlying Structure:
// Typically implemented using a Red-Black Tree.
// Common Operations
// insert(value): Inserts a value into the set.
// erase(value): Removes an element by value.
// find(value): Returns an iterator to the element if found, otherwise set.end().
// size(): Returns the number of elements in the set.
// clear(): Removes all elements from the set.
// empty(): Checks if the set is empty.
// count(value): Returns 1 if the value exists in the set, otherwise 0.
// Iterators: Allows traversal of the set elements.

#include <iostream>
#include <set>
using namespace std;

void demonstrateSet() {
    // Create a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate element, will be ignored

    // Display elements in the set
    cout << "Set elements: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Check if an element exists
    int value = 20;
    if (mySet.find(value) != mySet.end()) {
        cout << value << " is found in the set." << endl;
    } else {
        cout << value << " is not found in the set." << endl;
    }

    // Remove an element
    mySet.erase(20);

    // Check if the element was removed
    cout << "After erasing 20: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Clear the set
    mySet.clear();
    cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateSet();
    return 0;
}
 