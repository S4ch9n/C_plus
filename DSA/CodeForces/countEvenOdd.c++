// Count Even Odd
#include <iostream>
using namespace std; 
vector<int> countEvenOdd(vector<int> &arr, int n)
{
	// Write your code here.
       unordered_map<int, int> map;
    int even = 0;
    int odd = 0;

    // Step 1: Count frequencies
    for (int num : arr) {
        map[num]++;
    }

    // Step 2: Count even/odd frequency elements
    for (auto it : map) {
        if (it.second % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Step 3: Return result
    return {odd, even};

    
}
