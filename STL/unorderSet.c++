// In C++, an unordered_set is a container in the Standard Template Library (STL) that stores unique elements in an unordered manner, meaning the elements are not sorted in any specific order. It uses a hash table for its internal implementation, which allows for average constant time (O(1)) insertion, deletion, and search.

// Key Features of unordered_set
// Unique Elements: Stores only unique elements (duplicates are not allowed).
// Unordered Storage: Elements are not stored in any specific order.
// Efficient Operations:
// Average Time Complexity: O(1) for insertion, deletion, and searching.
// Worst-Case Time Complexity: O(n) in rare cases due to hash collisions.
// Hash Table-Based:
// Hash functions are used to determine the placement of elements.
// No Reverse Iterators: Unlike set, unordered_set does not support reverse iterators.
// Common Operations
// Operation	Description
// insert(value)	Adds a value to the unordered_set.
// erase(value)	Removes the value from the unordered_set.
// find(value)	Returns an iterator to the value if found, else end().
// count(value)	Returns 1 if the value exists, otherwise 0.
// size()	Returns the number of elements in the unordered_set.
// clear()	Removes all elements from the unordered_set.
// empty()	Checks if the unordered_set is empty.
// begin(), end()	Provides iterators for traversal.

#include <iostream>
#include <unordered_set>
using namespace std;

void demonstrateUnorderedSet() {
    // Initialize an unordered_set
    unordered_set<int> mySet;

    // Insert elements
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate, ignored

    // Display elements (order is not guaranteed)
    cout << "Unordered set elements: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Check for the existence of an element
    int value = 20;
    if (mySet.find(value) != mySet.end()) {
        cout << value << " exists in the unordered_set." << endl;
    } else {
        cout << value << " does not exist in the unordered_set." << endl;
    }

    // Count the occurrences of an element (always 0 or 1)
    cout << "Count of 30: " << mySet.count(30) << endl;

    // Erase an element
    mySet.erase(20);
    cout << "After erasing 20: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Size of the unordered_set
    cout << "Size of unordered_set: " << mySet.size() << endl;

    // Clear all elements
    mySet.clear();
    cout << "Is unordered_set empty? " << (mySet.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateUnorderedSet();
    return 0;
}
