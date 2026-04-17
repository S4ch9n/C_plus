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


    set<int> s2 = {1,2,3,4,5};
    //insert element
    s2.insert(0);

    //searching elements
    //The find() function is used to check whether an element exists. It returns an iterator to the element if found, else returns end() if the element is not found.

    //accessing elements using find()
    auto it = s2.find(0);
    if(it != s2.end()) cout << "element found : " << *it << endl;

    //The count() function can also be used to check existence, returns 1 if the element is present, 0 otherwise.
    //accessing element using count()
    if(s2.count(2)) cout << "2 exists in the set" << endl;

    //accessing all elements
    cout << "All elements : ";
    for(auto x : s2) cout << x << " ";

    cout << endl;


    //traversing using iterator
    for(auto it = s2.begin() ; it != s2.end() ; ++it) cout << *it << " ";
    cout << endl;

    //deleting by value
    s2.erase(5);

    //deleting by iterator
    s2.erase(s2.begin());

    //traversing the set
    cout << "After deleting the elements are : ";
    for(auto it : s2) cout << it << " ";
    cout << endl;


    // Check if an element exists
    int value = 20;
    if (mySet.find(value) != mySet.end()) {
        cout << value << " is found in the set." << endl;
    } else {
        cout << value << " is not found in the set." << endl;
    }

    // Remove an element by value
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
 