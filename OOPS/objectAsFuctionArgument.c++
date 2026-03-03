#include <iostream>
using namespace std;

class sample {
    int a;

public:
    void setdata(int x) {
        a = x;
    }

    void showdata(void) {
        cout << "a = " << a << endl;
    }

    friend void change_by_value(sample s);
    friend void change_by_reference(sample &s);
};

// Call by Value
void change_by_value(sample s) {
    s.a = 100;
}

// Call by Reference
void change_by_reference(sample &s) {
    s.a = 200;
}

int main() {
    sample obj;

    obj.setdata(10);
    cout << "Original value:\n";
    obj.showdata();

    change_by_value(obj);
    cout << "\nAfter call by value:\n";
    obj.showdata();

    change_by_reference(obj);
    cout << "\nAfter call by reference:\n";
    obj.showdata();

    return 0;
}