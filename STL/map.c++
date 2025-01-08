// In C++, a map is an associative container in the Standard Template Library (STL) that stores elements in key-value pairs, where each key is unique, and the keys are stored in sorted order (by default, in ascending order). A map is implemented as a balanced binary search tree, typically a Red-Black Tree.

// Key Features of map
// Key-Value Pairs:
// Each element is a pair of a key and its associated value.
// Keys are unique; duplicate keys are not allowed.
// Sorted Order:
// Keys are stored in sorted order (default is ascending).
// You can use a custom comparator for custom sorting.
// Efficient Operations:
// O(log n) for insertion, deletion, and searching.
// Bidirectional Iterators:
// Supports traversal using iterators.
// Common Operations
// Operation	Description
// insert(pair)	Inserts a key-value pair into the map.
// erase(key)	Removes the element with the specified key.
// find(key)	Returns an iterator to the element with the specified key, or end() if not found.
// count(key)	Returns 1 if the key exists, otherwise 0.
// size()	Returns the number of elements in the map.
// clear()	Removes all elements from the map.
// empty()	Checks if the map is empty.
// []	Access or modify the value associated with a key.

#include <iostream>
#include <map>
using namespace std;

void demonstrateMap() {
    // Initialize a map
    map<int, string> myMap;

    // Insert elements using `insert`
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});

    // Insert elements using `[]`
    myMap[4] = "Four";
    myMap[5] = "Five";

    // Display the map
    cout << "Map elements:\n";
    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Access a value using a key
    cout << "Value for key 3: " << myMap[3] << endl;

    // Modify a value using a key
    myMap[3] = "Three (modified)";
    cout << "Modified value for key 3: " << myMap[3] << endl;

    // Check if a key exists
    int key = 6;
    if (myMap.find(key) != myMap.end()) {
        cout << "Key " << key << " exists with value: " << myMap[key] << endl;
    } else {
        cout << "Key " << key << " does not exist in the map.\n";
    }

    // Erase an element
    myMap.erase(2);
    cout << "After erasing key 2:\n";
    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Size of the map
    cout << "Size of the map: " << myMap.size() << endl;

    // Clear the map
    myMap.clear();
    cout << "Is the map empty? " << (myMap.empty() ? "Yes" : "No") << endl;
}

int main() {
    demonstrateMap();
    return 0;
}
