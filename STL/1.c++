 #include <iostream> // For input and output
using namespace std;

// Function to demonstrate the use of `pair`
void definePair() {
    // Define a simple pair of integers
    pair<int, int> p = {1, 3};

    // Access and print the first and second elements of the pair
    cout << "Simple Pair: ";
    cout << p.first << " " << p.second << endl;

    // Define a nested pair (pair inside a pair)
    pair<int, pair<int, int>> nestedPair = {1, {3, 4}};

    // Access and print the elements of the nested pair
    cout << "Nested Pair: ";
    cout << nestedPair.first << " ";          // Prints the first element of the outer pair
    cout << nestedPair.second.second << " ";  // Prints the second element of the inner pair
    cout << nestedPair.second.first << endl;  // Prints the first element of the inner pair

    // Accessing elements of a pair stored in an array
    pair<int, int> array[] = {{1, 2}, {5, 6}, {6, 7}}; 
    // The array contains three pairs: index 0: {1, 2}, index 1: {5, 6}, index 2: {6, 7}

    cout << "Array of Pairs:" << endl;
    for (int i = 0; i < 3; i++) { // Loop through the array of pairs
        cout << "Pair " << i << ": " << array[i].first << ", " << array[i].second << endl;
    }
}

int main() {
    // Call the function to demonstrate `pair` usage
    definePair();
    return 0; // End of program
}
