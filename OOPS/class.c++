#include <iostream>   // for input/output
using namespace std;

// ------------------------------
// Class : blueprint of an object
// ------------------------------

// A Student class to represent student data
class Student {
  public:
    // Attributes (properties of a student)
    string name;
    int rollNum;
    float cgpa;
};

// A Car class to represent car data
class Car {
  public:
    // Attributes (properties of a car)
    string name;
    string type;
    int price;
};

// ------------------------------
// Function to print Student details
// ------------------------------
// NOTE: Passed by value (copy of object is made)
// If you want to modify the object, use "Student& s"
void change(Student s) {
  cout << s.name << " " << s.rollNum << " " << s.cgpa << endl;
}

int main() {
  // ------------------------------
  // Object : instance of a class
  // ------------------------------

  // Creating Student objects
  Student s1;  // object s1 of Student class
  Student s2;  // object s2 of Student class
  Student s3;  // object s3 of Student class

  // Assigning values to s1
  s1.name = "Akash";
  s1.rollNum = 23;
  s1.cgpa = 9.6;

  // Assigning values to s2
  s2.name = "Suresh";
  s2.rollNum = 25;
  s2.cgpa = 9.3;

  // Assigning values to s3
  s3.name = "Rajesh";
  s3.rollNum = 30;
  s3.cgpa = 8.9;

  // Creating Car objects
  Car c1;  // object c1 of Car class
  Car c2;  // object c2 of Car class

  // Assigning values to c1
  c1.name = "BMW";
  c1.type = "Sedan";
  c1.price = 2500000;

  // Assigning values to c2
  c2.name = "Audi";    // fixed typo (was "Adui")
  c2.type = "Sedan";
  c2.price = 2500000;

  // ------------------------------
  // Displaying object data
  // ------------------------------

  // Printing Student details using function
  change(s1);
  change(s2);
  change(s3);

  // Printing Car details directly
  cout << c1.name << " " << c1.type << " " << c1.price << endl;
  cout << c2.name << " " << c2.type << " " << c2.price << endl;

  return 0;  // end of program
}
