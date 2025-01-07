
// In C++, a multiset is a container in the Standard Template Library (STL) that stores elements in sorted order, allowing duplicate values. It is similar to a set, but unlike set, it can contain multiple elements with the same value. A multiset is implemented as a balanced binary search tree, typically a Red-Black Tree.

// Key Features of multiset
// Duplicates Allowed: Unlike set, a multiset allows duplicate elements.
// Sorted Order:
// By default, elements are stored in ascending order.
// A custom comparator can be used for different orderings.
// Efficient Operations:
// O(log n) for insertion, deletion, and searching.
// Iterators:
// Supports bidirectional iterators for traversal.
// Common Operations
// insert(value): Inserts a value into the multiset.
// erase(value): Removes all occurrences of the value.
// find(value): Returns an iterator to the first occurrence of the value if found, otherwise multiset.end().
// count(value): Returns the number of occurrences of the value.
// size(): Returns the number of elements in the multiset.
// clear(): Removes all elements from the multiset.
// empty(): Checks if the multiset is empty.
// Iterators: Allows traversal of the multiset elements.

#include <iostream>
#include <set>
using namespace std;

void demonstrateMultiset() {
    // Create a multiset of integers
    multiset<int> myMultiset;

    // Insert elements into the multiset
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(10); // Duplicate element
    myMultiset.insert(30);
    myMultiset.insert(20); // Another duplicate

    // Display elements in the multiset
    cout << "Multiset elements: ";
    for (int val : myMultiset) {
        cout << val << " ";
    }
    cout << endl;

    // Count the occurrences of an element
    cout << "Occurrences of 10: " << myMultiset.count(10) << endl; // Output: 2
    cout << "Occurrences of 20: " << myMultiset.count(20) << endl; // Output: 2

    // Erase all occurrences of 20
    myMultiset.erase(20);

    // Display elements after erase
    cout << "After erasing 20: ";
    for (int val : myMultiset) {
        cout << val << " ";
    }
    cout << endl;

    // Insert more elements
    myMultiset.insert(15);
    myMultiset.insert(10);

    // Find an element
    auto it = myMultiset.find(10);
    if (it != myMultiset.end()) {
        cout << "Found 10 in the multiset." << endl;
    }

    // Size of the multiset
    cout << "Size of the multiset: " << myMultiset.size() << endl;

    // Clear the multiset
    myMultiset.clear();
    cout << "Is the multiset empty? " << (myMultiset.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateMultiset();
    return 0;
}
