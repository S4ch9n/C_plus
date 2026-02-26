#include <iostream>
using namespace std;

class item {
    static int count;   // static variable
    int number;

public:
    void getData(int a) {
        number = a;
        count++;
    }

    void getCount() {
        cout << "Count: " << count << endl;
    }
};

// Static member initialization
int item::count;

int main() {
    item a, b, c;   // objects

    a.getCount();   // display count
    b.getCount();
    c.getCount();

    a.getData(10);
    b.getData(20);
    c.getData(30);

    cout << "\nAfter assigning values:\n";
    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}