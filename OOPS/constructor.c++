#include <iostream>
using namespace std;

class Student{
  public:
  string name;
  int rno;
  float gpa;

  Student(string s , int r , float c){
    name = s;
    rno = r;
    gpa = c;
  }
};
int main(){
  Student s1("Nick",16 , 9.2);
  cout << s1.name << " " <<   s1.rno << " " << s1.gpa << endl;
}