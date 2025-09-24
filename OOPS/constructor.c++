#include <iostream>
using namespace std;

// ------------------------------
// Class : blueprint of an object
// ------------------------------
class Student {
  public:
    string name;
    int rno;
    float gpa;

    // ------------------------------
    // Constructor
    // ------------------------------
    // A constructor is a special member function of a class
    // - It has the same name as the class
    // - It does not have a return type (not even void)
    // - It is automatically called when an object is created
    // - It is used to initialize the attributes of an object

    // Default constructor (no parameters)
    Student() {
      // Here, we could set default values (currently empty)
    }

    // Parameterized constructor (with parameters)
    Student(string s, int r, float c) {
      // "this" object is being created,
      // and these values initialize its attributes
      name = s;
      rno = r;
      gpa = c;
    }
    //mulitple constructor
    Student(string s , int r){
      name = s;
      rno = r;
    }

    Student(string s){
      name = s;
    }

    Student(int r , float g, string s){
      name = s;
      rno = r;
      gpa = g;
    }
};

int main() {
  // Creating an object with the parameterized constructor
  Student s1("Nick", 16, 9.2);
  s1.gpa = 9.6;

  // When s1 is created, the constructor is automatically called
  // with ("Nick", 16, 9.2) as arguments
  // -> name = "Nick", rno = 16, gpa = 9.2
  Student s2;
  s2.name = "Himanshu";
  s2.rno = 88;
  s2.gpa = 6.2;

  Student s3("Paras" , 13);

  Student s4("Gagan");

  Student s5(45 , 9.2 , "Akash");
  cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
  cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
  cout << s3.name << " " << s3.rno << endl;
  cout << s4.name << endl;
  cout << s5.name << " " << s5.rno << " " << s5.gpa << endl;

  return 0;
}


