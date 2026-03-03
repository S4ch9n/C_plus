#include <iostream>
using namespace std;

class sample {
    int a;

public:
    void setdata(int x) {
        a = x;
    }

    friend void show(sample s);   // friend function declaration
};

void show(sample s) {   // not a member function
    cout << "Value of a = " << s.a << endl;
}

int main() {
    sample obj;
    obj.setdata(10);

    show(obj);   // calling friend function

    return 0;
}