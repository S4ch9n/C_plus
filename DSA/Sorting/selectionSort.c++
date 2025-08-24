#include <iostream>
using  namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0 ; i < n ; i++) cin >> arr[i];

  //sort elements
  for(int i = 0 ; i < n - 1 ; i++){
    int min = i;
    for(int j = i + 1 ; j < n ; j++){
      if(arr[j] < arr[min]) min = j;
    }
  swap(arr[i] , arr[min]);
  }
  return 0;
}