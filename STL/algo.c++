#include <iostream>
#include <algorithm> // For sort, next_permutation, max_element
#include <bitset>    // For bitset (alternative to __builtin_popcountll)
#include <vector>    // For vector
#include <string>    // For string

using namespace std;

// Comparator function for custom sorting of pairs
bool comp(pair<int, int> p1, pair<int, int> p2) {
    // If the second elements are not the same, sort by second element in ascending order
    if (p1.second != p2.second)
        return p1.second < p2.second;
    // If second elements are the same, sort by first element in descending order
    return p1.first > p2.first;
}

void algo(vector<int>& a) {
    int n = a.size();

    // Step 1: Sort the entire array in ascending order
    sort(a.begin(), a.end());
    cout << "Array after sorting in ascending order: ";
    for (int num : a) cout << num << " ";
    cout << endl;

    // Step 2: Sort the subarray (from index 2 to the end) in ascending order
    if (n > 2) {
        sort(a.begin() + 2, a.end());
        cout << "Array after sorting from index 2 to end: ";
        for (int num : a) cout << num << " ";
        cout << endl;
    }

    // Step 3: Sort the entire array in descending order
    sort(a.begin(), a.end(), greater<int>());
    cout << "Array after sorting in descending order: ";
    for (int num : a) cout << num << " ";
    cout << endl;

    // Step 4: Custom sorting for an array of pairs
    vector<pair<int, int>> a1 = {{1, 2}, {2, 1}, {4, 1}};
    // Sort pairs using the custom comparator `comp`
    sort(a1.begin(), a1.end(), comp);
    cout << "Array of pairs after custom sorting: ";
    for (auto& p : a1) cout << "{" << p.first << "," << p.second << "} ";
    cout << endl;

    // Step 5: Count the number of set bits (1s) in the binary representation of a number
    long long num = 126369821; // Example number
    int cnt = bitset<64>(num).count(); // Count of set bits in `num`
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    // Step 6: Generate and print all permutations of a string
    string s = "123";
    cout << "Permutations of string \"" << s << "\":" << endl;
    sort(s.begin(), s.end()); // Ensure the string is sorted to start with the smallest permutation
    do {
        cout << s << endl; // Print the current permutation of the string
    } while (next_permutation(s.begin(), s.end())); // Generate the next permutation

    // Step 7: Find the maximum element in the array
    int maxi = *max_element(a.begin(), a.end()); // Find the largest element in the array
    cout << "Maximum element in the array is: " << maxi << endl;
}

int main() {
    // Declare and initialize a vector
    vector<int> a = {5, 3, 8, 1, 2};

    // Call the `algo` function for sorting and other operations
    algo(a);

    // Print the final modified array after processing in the `algo` function
    cout << "Final modified array:" << endl;
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
