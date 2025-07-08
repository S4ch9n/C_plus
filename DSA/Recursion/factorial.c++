// factorial : 5 = 5 x 4 x 3 x 2 x 1 = 120
#include <iostream>
using namespace std;

int fac(int n){
  if (n == 0 || n == 1) return 1;
  return n * fac(n - 1);
}

int main(){
  int n = 5;
  cout << "Factorial of give number " << n << " " << "is : " <<   fac(n);         
  return 0;
}
