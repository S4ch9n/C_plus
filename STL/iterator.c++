// In C++, an iterator is an object that allows you to traverse elements in a container (like an array, vector, list, or map) sequentially. Iterators act as a bridge between containers and algorithms by providing a consistent interface to navigate through container elements.

// Iterators in STL (Standard Template Library)
// STL containers provide their own iterator types:

// begin(): Returns an iterator pointing to the first element.
// end(): Returns an iterator pointing to one past the last element.

// In C++, an iterator is an object that allows you to traverse elements in a container (like an array, vector, list, or map) sequentially. Iterators act as a bridge between containers and algorithms by providing a consistent interface to navigate through container elements.

// Iterators in STL (Standard Template Library)
// STL containers provide their own iterator types:

// begin(): Returns an iterator pointing to the first element.
// end(): Returns an iterator pointing to one past the last element.

#include <iostream>
#include <vector>
using namespace std;

void defineIterator() {
    // Initializing a vector with integers
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    // Using a forward iterator to traverse the vector
    vector<int>::iterator it = v.begin(); // Iterator pointing to the first element
    cout << *(it) << " "; // Print the first element (1)
    it++;
    cout << *(it) << " "; // Print the second element (2)
    it = it + 2;          // Move the iterator 2 steps ahead
    cout << *(it) << " "; // Print the fourth element (4)

    cout << endl;

    // Using a reverse iterator to traverse the vector from the back
    vector<int>::reverse_iterator rit = v.rbegin(); // Points to the last element
    cout << *(rit) << " ";                          // Print the last element (5)
    rit++;
    cout << *(rit) << " ";                          // Print the second-to-last element (4)

    cout << endl;

    // Demonstrating the `end` iterator
    vector<int>::iterator endIt = v.end(); // Points one past the last element
    cout << "Using end iterator, no dereferencing possible as it points past the last element.\n";

    // Accessing the last element using `back()` function
    cout << "Last element using back(): " << v.back() << endl;

    // Iterating through the vector using different methods
    cout << "Iterating through vector using different methods:" << endl;

    // 1. Normal iteration using an iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // 2. Using the `auto` keyword for cleaner code
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // 3. Using a range-based for loop
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Initializing another vector and performing operations on it
    vector<int> v2;
    v2.emplace_back(10);
    v2.emplace_back(20);
    v2.emplace_back(30);
    v2.emplace_back(40);
    v2.emplace_back(50);

    // Printing elements of v2
    cout << "Elements in v2: ";
    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;

    // Deleting elements from the vector
    v2.erase(v2.begin() + 1); // Erase the second element (20)
    cout << "After erasing second element: ";
    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;

    // Deleting multiple elements (range erase)
    v2.erase(v2.begin() + 1, v2.begin() + 3); // Erase 30 and 40
    cout << "After erasing multiple elements (30 and 40): ";
    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating the `insert` function

    // Initializing a third vector
    vector<int> v3;
    v3.emplace_back(100); // Add 100 to the vector
    v3.emplace_back(200); // Add 200 to the vector
    cout << "Elements present in v3 are: ";
    for (auto it : v3) {
        cout << it << " ";
    }
    cout << endl;

    // Inserting elements into v3
    v3.insert(v3.begin(), 300);                // Insert 300 at the beginning
    v3.insert(v3.begin() + 1, 2, 400);         // Insert two occurrences of 400 at position 1
    // v3 now contains {300, 400, 400, 100, 200}

    // Initializing a fourth vector
    vector<int> v4;
    v4.emplace_back(100);
    v4.emplace_back(200);

    // Copying elements into v4
    vector<int> dup(2, 50); // Create a vector with 2 elements, both 50
    v4.insert(v4.begin(), dup.begin(), dup.end()); // Insert elements of `dup` at the beginning of v4

    cout << "After copying elements into v4: ";
    for (auto it : v4) {
        cout << it << " "; // Print all elements of v4
    }
    cout << endl;

    // Printing elements of `dup`
    cout << "Elements in dup vector: ";
    for (auto it : dup) {
        cout << it << " ";
    }
    cout << endl;

    // Printing the size of v4
    cout << "Size of v4: " << v4.size() << endl;

    // Demonstrating `pop_back` to remove the last element from v3
    v3.pop_back();

    // Swapping contents of v2 and v3
    // Before swap: v2 = {10}, v3 = {300, 400, 400, 100}
    v2.swap(v3); // After swap: v2 -> {300, 400, 400, 100}, v3 -> {10}

    // Clearing all elements of vector v
    v.clear();

    // Checking if the vector `v` is empty
    cout << "Is vector v empty? " << v.empty() << endl; // true if empty

    // Printing elements in `v` (if any)
    for (auto it : v) {
        cout << "Elements present in v are: " << it << " ";
    }
    cout << endl;
}

int main() {
    defineIterator();
    return 0;
}


