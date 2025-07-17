// Count Distinct Subarrays With At Most K Odd Elements
#include <iostream>
using namespace std;
int atMostK(vector<int>& arr, int k) {
    int left = 0, count = 0, oddCount = 0;

    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] % 2 != 0) {
            oddCount++;
        }

        while (oddCount > k) {
            if (arr[left] % 2 != 0) {
                oddCount--;
            }
            left++;
        }

        count += (right - left + 1);
    }

    return count;
}

int distinctSubKOdds(vector<int>& arr, int k) {
    return atMostK(arr, k) - atMostK(arr, k - 1);
}
