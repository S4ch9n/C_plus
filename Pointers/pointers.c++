// Pointers in C++ are variables that store the memory address of another variable.

#include <iostream>
using namespace std;

int main() {
    int x = 10;                  // an integer variable with value 10
    int *ptr = &x;               // pointer ptr stores the address of x

    cout << x << endl;           // prints the value of x (10)
    cout << &x << endl;          // prints the address of x
    cout << ptr << endl;         // prints the address stored in ptr (same as &x)
    cout << &ptr << endl;        // prints the address of the pointer variable itself
    cout << *ptr << endl;        // prints the value at the address stored in ptr (10)

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "Value is : " << p2 << endl;

    cout << "Size of integer is " << sizeof(x) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    //pointer to int is created , and pointing to some garabage address
    int *p;
    cout << *p << endl;


    //can also write like this
    int num2 = 123;
    int *ptr2 = 0;
    ptr2 = &num2;


    cout << *ptr2 << endl; //print the value at the address stored in ptr (123)



    //incrementing the value
    int *ptr3 = &num2;
    cout << "before " << num2 << endl; //123
    (*ptr3)++;
    cout << "before " << num2 << endl; //124

    //copying the pointer
    int *q = ptr3;
    cout << ptr3 <<" - " << q << endl;
    cout << *ptr3 <<" - " << *q << endl;

    //arithmatic
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;
    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    return 0;
}
