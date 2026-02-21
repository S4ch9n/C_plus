#include <iostream>
using namespace std;

void binary(int arr[], int n, int i) {
    if (i == n) {   // base case: one full binary string formed
        for (int j = 0; j < n; j++)
            cout << arr[j];
        cout << endl;
        return;
    }

    arr[i] = 0;
    binary(arr, n, i + 1);

    arr[i] = 1;
    binary(arr, n, i + 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    binary(arr, n, 0);

    return 0;
}
