#include <iostream> // For input and output
#include <utility>
using namespace std;

// Function to demonstrate the use of `pair`
void definePair()
{
    // Define a simple pair of integers
    pair<int, int> p = {1, 3};

    // Access and print the first and second elements of the pair
    cout << "Simple Pair: ";
    cout << p.first << " " << p.second << endl;

    // Define a nested pair (pair inside a pair)
    pair<int, pair<int, int>> nestedPair = {1, {3, 4}};

    // Access and print the elements of the nested pair
    cout << "Nested Pair: ";
    cout << nestedPair.first << " ";         // Prints the first element of the outer pair
    cout << nestedPair.second.second << " "; // Prints the second element of the inner pair
    cout << nestedPair.second.first << endl; // Prints the first element of the inner pair

    // Accessing elements of a pair stored in an array
    pair<int, int> array[] = {{1, 2}, {5, 6}, {6, 7}};
    // The array contains three pairs: index 0: {1, 2}, index 1: {5, 6}, index 2: {6, 7}

    cout << "Array of Pairs:" << endl;
    for (int i = 0; i < 3; i++)
    { // Loop through the array of pairs
        cout << "Pair " << i << ": " << array[i].first << ", " << array[i].second << endl;
    }

    // make_pair
    auto myPair = make_pair(1, 10);
    cout << myPair.first << " " << myPair.second;

    // copy value
    pair<int, int> p4(p);

    cout << p4.first << " " << p4.second << endl;

    pair<bool, char> p5;
    p5.first = 1;
    p5.second = 'A';
    cout << p5.first << " " << p5.second << endl;

    

    pair<int, int> p6 = {10, 20};
    pair<int, int> p7 = {30, 40};

    // Equality
    if(p6 == p7)
        cout << "p6 == p7\n";
    else
        cout << "p6 != p7\n";

    // Not equal
    if(p6 != p7)
        cout << "p6 and p7 are different\n";

    // Less than
    if(p6 < p7)
        cout << "p6 < p7\n";

    // Greater than
    if(p6 > p7)
        cout << "p6 > p7\n";

    // Less than or equal
    if(p6 <= p7)
        cout << "p6 <= p7\n";

    // Greater than or equal
    if(p6 >= p7)
        cout << "p6 >= p7\n";


    // swap : if swapping the values data types should be same
    cout << "Before swapping : " << endl;
    cout << p6.first << " " << p6.second << endl;
    cout << p7.first << " " << p7.second << endl;

    cout << "After swapping : " << endl;
    p6.swap(p7);
    cout << p6.first << " " << p6.second << endl;
    cout << p7.first << " " << p7.second << endl;
   
   
   
   
}

int main()
{
    // Call the function to demonstrate `pair` usage
    definePair();
    return 0; // End of program
}
