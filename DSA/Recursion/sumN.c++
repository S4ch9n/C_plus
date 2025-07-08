//parametrized recusion : pass the result as an extra paremeter , nd build the answer during the recursive call
#include <iostream>
using namespace std;

void sum_n_num(int n , int sum){
  if(n == 0 ){
    cout << "Sum of n number is : " << sum; //output : 6
    return;
  }
  sum_n_num(n - 1 , sum + n);
}

int main(){
  int n = 3;
  sum_n_num(n , 0);
}


//functional recursion : Perform the computation after the recursive call return
#include <iostream>
using namespace std;

int sum_of_n2(int n){
  if (n == 0) return 0;           
  return n + sum_of_n2(n - 1);     
}

int main(){
  int n = 3;
  cout << sum_of_n2(n);           // Output: 6 (3 + 2 + 1)
  return 0;
}
