#include <iostream>
using namespace std;

// Partition function: places pivot in correct position
// and rearranges elements smaller on left, larger on right
int pIndex(int arr[], int low, int high) {
    int p = arr[low];   // choose pivot as the first element
    int i = low;        // pointer that scans from left
    int j = high;       // pointer that scans from right

    // Loop until i and j cross
    while (i < j) {
        // Move i right until we find element > pivot
        while (i <= high && arr[i] <= p) i++;

        // Move j left until we find element <= pivot
        while (j >= low && arr[j] > p) j--;   

        // If pointers haven't crossed, swap
        if (i < j) swap(arr[i], arr[j]); 
    }

    // Place pivot in its correct sorted position
    swap(arr[low], arr[j]);

    return j;   // return pivot's final index
}

// Recursive QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {   // base case: subarray must have > 1 element
        int pivot = pIndex(arr, low, high); // partition the array

        // Recursively sort left and right subarrays
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Sort array
    quickSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
