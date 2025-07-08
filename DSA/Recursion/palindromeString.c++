//using single pointer : 
#include <iostream>
using namespace  std;

bool palStr(int i , string &s){
  if(i > s.size() / 2) return true;

  if(s[i] != s[s.size() - i -1]) return false;
  return palStr(i + 1 , s);
}
int main(){
  string s = "madam";
  cout << palStr(0,s);
  return 0;
}


//using double pointer
#include <iostream>
using namespace  std;
bool palStr(int l ,int r , string &s){
    if(l >= r) return true;
    if(s[l] != s[r]) return false;
    return palStr(l + 1 , r - 1 , s);
}
int main(){
  string s = "masism";
  int left = 0;
  int right = s.size() - 1;
  cout << palStr(left , right , s);
  return 0;
}