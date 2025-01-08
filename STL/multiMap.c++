
// In C++, a multimap is an associative container in the Standard Template Library (STL) that allows storing elements as key-value pairs, similar to a map. However, unlike a map, a multimap allows multiple elements with the same key.

// Key Features of multimap
// Key-Value Pairs:
// Each element is a pair consisting of a key and its associated value.
// Duplicate Keys:
// Unlike map, multimap allows multiple elements with the same key.
// Sorted Order:
// The elements are stored in sorted order based on the key (default: ascending order).
// Efficient Operations:
// O(log n) for insertion, deletion, and searching.
// Bidirectional Iterators:
// Supports traversal using iterators.
// Common Operations
// Operation	Description
// insert(pair)	Inserts a key-value pair into the multimap.
// erase(iterator)	Removes an element using an iterator.
// find(key)	Returns an iterator to the first element with the given key.
// count(key)	Returns the number of elements with the given key.
// equal_range(key)	Returns a pair of iterators specifying the range of elements with the given key.
// clear()	Removes all elements from the multimap.
// size()	Returns the number of elements in the multimap.
// empty()	Checks if the multimap is empty.

#include <iostream>
#include <map>
using namespace std;

void demonstrateMultimap() {
    // Initialize a multimap
    multimap<int, string> myMultimap;

    // Insert elements
    myMultimap.insert({1, "One"});
    myMultimap.insert({2, "Two"});
    myMultimap.insert({2, "Second Two"}); // Duplicate key
    myMultimap.insert({3, "Three"});
    myMultimap.insert({1, "First One"}); // Duplicate key

    // Display elements
    cout << "Multimap elements:\n";
    for (const auto& pair : myMultimap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Count the number of elements with a specific key
    cout << "\nNumber of elements with key 2: " << myMultimap.count(2) << endl;

    // Find the first occurrence of a key
    auto it = myMultimap.find(2);
    if (it != myMultimap.end()) {
        cout << "First element with key 2: " << it->second << endl;
    }

    // Get all elements with a specific key using equal_range
    cout << "\nElements with key 1:\n";
    auto range = myMultimap.equal_range(1);
    for (auto itr = range.first; itr != range.second; ++itr) {
        cout << itr->first << " -> " << itr->second << endl;
    }

    // Erase all elements with a specific key
    myMultimap.erase(2);
    cout << "\nAfter erasing elements with key 2:\n";
    for (const auto& pair : myMultimap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Size of the multimap
    cout << "\nSize of the multimap: " << myMultimap.size() << endl;

    // Clear the multimap
    myMultimap.clear();
    cout << "Is the multimap empty? " << (myMultimap.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateMultimap();
    return 0;
}
