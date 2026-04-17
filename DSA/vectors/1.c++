#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

  // declare an empty vector
  vector<int> v1;

  // declare vector with given size and value
  vector<int> v2(3, 2); //create vector with 3 element and initialize each element with value 2

  // print items using range-based loop
  for (int x : v2){
    cout << x << " ";
  }
  cout << endl;

  // Initializes vector using
  // initializer list.
  vector<int> v3 = {1, 2, 3};

  //print items of v3
  for(int x : v3){
    cout << x << " ";
  }
  
  //insert element at the end
  v3.push_back(4);

  //insert element at index 1
  v3.insert(v3.begin() + 1, 0);


  //print items
  for(auto x : v3){
    cout << x << " ";
  }
  cout << endl;

  //accessing elements using operators
  vector<int> v4 = {10,20,30,40,50};

  cout << "Element at index 2 : " << v4[1] << endl;

  //accessing index using at()
  cout << "Element at index 3 : " << v4.at(4) << endl;

  // cout << v4.at(10); //this will throw out_of_range exception 

  //update the value 
  v4[0] = 0;

  cout << v4[0] << endl;

  //find vector size
  cout << v4.size();


  //delete last element
  v4.pop_back();


  //deleting element 30
  v4.erase(find(v4.begin() , v4.end() , 30));

  //range - based loop
  for(auto x : v4){
    cout << x << " ";
  }
  cout << endl;

  //To check if the vector is empty we use empty() function. It returns true if the vector has no elements ,and false otherwise.

  //for empty vector
  if(v1.empty()){
    cout << "vector is empty" << endl;
  }else {
    cout << "vector is not empty : " << v1[0] << endl;
  }

  //have element
  if(!v4.empty()){
    cout << "Vector is not empty.First element : " << v4[0] << endl;
  }


  //multidimensional array
  vector<vector<int>> matrix = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };

  //traversing using range - based loop using auto
  for(const auto &row : matrix){
    for(const auto &val : row){
      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}

