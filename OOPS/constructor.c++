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
};

int main() {
  // Creating an object with the parameterized constructor
  Student s1("Nick", 16, 9.2);

  // When s1 is created, the constructor is automatically called
  // with ("Nick", 16, 9.2) as arguments
  // -> name = "Nick", rno = 16, gpa = 9.2

  cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;

  return 0;
}
  