#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low;       // Pointer to left subarray
    int right = mid + 1;  // Pointer to right subarray

    // Merge both halves into temp[]
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements of left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low >= high) return;  // Base case

    int mid = (low + high) / 2;
    mergesort(arr, low, mid);      // Sort left half
    mergesort(arr, mid + 1, high); // Sort right half
    merge(arr, low, mid, high);    // Merge both halves
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
