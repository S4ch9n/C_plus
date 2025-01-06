// container ---------------------->>>> vectors

// Vectors in C++ are part of the Standard Template Library (STL) and represent a dynamic array. Unlike arrays, vectors can resize themselves automatically when elements are inserted or removed, which makes them versatile for many use cases. Here's an overview of how to use vectors in C++:

#include <iostream>
#include <vector>
using namespace std;

// Function to demonstrate various vector operations
void defineVector() {
    // 1. Creating an empty vector and adding elements to it
    vector<int> v;            // Declare an empty vector of integers
    v.push_back(1);           // Adds the value 1 at the end of the vector
    v.emplace_back(2);        // Adds the value 2 at the end (more efficient than push_back)

    // 2. Declaring a vector of pairs
    vector<pair<int, int>> vec; // Declare a vector to store pairs of integers
    vec.push_back({1, 3});      // Adds a pair (1, 3) to the vector (requires braces)
    vec.emplace_back(4, 5);     // Adds a pair (4, 5) to the vector (no braces required)

    // 3. Pre-initialized vectors
    vector<int> v2(5, 100); // Creates a vector of size 5, all elements initialized to 100
                            // Result: {100, 100, 100, 100, 100}
    vector<int> v3(5);      // Creates a vector of size 5, all elements initialized to 0 (default for integers)
                            // Result: {0, 0, 0, 0, 0}
    vector<int> v4(5, 20);  // Creates a vector of size 5, all elements initialized to 20
                            // Result: {20, 20, 20, 20, 20}

    // 4. Copying one vector to another
    vector<int> v5(v4);     // Creates a new vector v5 as a copy of v4
                            // Result: v5 contains {20, 20, 20, 20, 20}


   // accessing vector elements
   cout << v5[0] << " " << v5[1] << " "  << v5[2] << " " << v5[3] <<endl;                     
}

int main() {
    // Call the function to demonstrate vector operations
    defineVector();
    return 0;
}
