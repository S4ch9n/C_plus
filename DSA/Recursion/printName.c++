//Print name 5 time
#include<iostream>
#include <string>
using namespace std;
void printName(int n){
  string name = "John";
  if(n <= 0) return;
  cout << name << " ";
  return printName(n -1);
}
int main(){
  int n = 5;
  printName(n);
}


//Print linearly from 1 to m;
void linearlyPrint(int n){
  if(n <= 0) return;
  linearlyPrint(n - 1);
  cout << n << " ";
}
int main(){
  int n = 20;
  linearlyPrint(n);
}



//Print N to 1
void printN(int n) {
    if(n <= 0) return;
    cout << n << " ";
    printN(n - 1);
}
int main() {
    int num = 20;
    printN(num);
}