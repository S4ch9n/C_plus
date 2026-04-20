#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;

  int arr[n];
  for(int i = 0 ; i < n ; i++) cin >> arr[i];

  int left = 0 , right = n - 1 , siraj = 0 , diama = 0;
  bool turn = true; // true for siraj and false for dima
  while(left <= right){
    int picked = 0;
    if(arr[left] > arr[right]){
      picked = arr[left];
      left++;
    }else{
      picked = arr[right];
      right--;
    }
    if(turn){
      siraj += picked;
    }else{
      diama += picked;
    }
    turn = !turn; //switch turn
  }
  cout << siraj << " " << diama << endl;
  return 0;
}