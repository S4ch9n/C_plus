//Cyclically Rotate An Array By One
#include <iostream>
using namespace std;
void rotate(vector<int>& arr, int n) {
    // Write your code here
    int last = arr[n-1];
    for(int i = n-1 ; i > 0 ; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}