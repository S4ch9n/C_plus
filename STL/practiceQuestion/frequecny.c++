//find the highest/lowest frequency element
#include <iostream>
#include <vector>
#include <algorithm> // 
#include <unordered_map>

using namespace std;


int main(){
  unordered_map<int , int> freq;
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0 ; i < n ; i++)cin >> arr[i];

  for(auto it : arr){
    freq[it]++;
  }

  //find the max and min
  int maxFreq = INT_MIN;
  int minFreq = INT_MAX;

  int minElement = 0;
  int maxELement = 0;

  //min and max
  for(auto &it : freq){

    //for the min
    if(it.second < minFreq){
      minFreq = it.second;
      minElement = it.first;
    }
    if(it.second > maxFreq){
      maxFreq = it.second;
      maxELement = it.first;
    }
  }
  cout << "Element with minimum frequency" << " " << minFreq << " = " << minElement;
  cout << "Element with maximum frequency" << " " << maxFreq << " = " << maxELement;
}