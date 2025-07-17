#include <iostream>
using namespace std;
vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    int n = arr.size();
    
    // Step 1: Add 1 starting from the end
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 9) {
            arr[i]++; // simple case: no carry
            // Step 2: Remove leading zeros before returning
            while (!arr.empty() && arr[0] == 0) {
                arr.erase(arr.begin());
            }
            return arr;
        } else {
            arr[i] = 0; // 9 + 1 = 10 ? carry over
        }
    }

    // Step 3: If all digits were 9 (e.g., 999 ? 1000), insert 1 at beginning
    arr.insert(arr.begin(), 1);

    // Step 4: Remove leading zeros (if any)
    while (!arr.empty() && arr[0] == 0) {
        arr.erase(arr.begin());
    }

    return arr;
}