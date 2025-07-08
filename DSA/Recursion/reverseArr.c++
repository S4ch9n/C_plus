//using resursion single pointer : In single pointer recursion, you only pass one index, and calculate the other inside the function, often using the array size n.
#include <iostream>
#include <iostream>
using namespace std;

void reverseArr(int i , int arr[] , int n){
  if(i >= n / 2) return;
  swap(arr[i] , arr[n - i - 1]);
  reverseArr(i + 1 , arr , n);
}
int main(){
  int n; 
  cout << "Enter the value for n : ";
  cin >> n;
  int arr[n];
  cout << "enter the values for array : ";
  for(int i = 0 ; i < n ; i++) cin >> arr[i];
  reverseArr(0 , arr , n);
  for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
}



//using resursion double pointer : Two-pointer recursion is a type of recursive technique where the function uses two indices or pointers, typically representing the start and end of a range (like left and right), and they move toward each other with each recursive call.
using namespace std;

void reverseArr(int l, int r, int arr[]) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverseArr(l + 1, r - 1, arr);
}

int main() {
    int n = 5;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArr(0, n - 1, arr);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
