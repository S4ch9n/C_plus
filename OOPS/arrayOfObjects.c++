#include <iostream>
using namespace std;

class employee {
    char name[50];
    float age;

public:
    void getdata(void);
    void putdata(void);
};

// Outside class function definition using scope resolution operator ::

void employee::getdata(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void employee::putdata(void) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

const int size = 3;

int main() {
    employee manager[size];

    for(int i = 0; i < size; i++) {
        cout << "\nEnter details of manager " << i + 1 << endl;
        manager[i].getdata();
    }

    cout << "\nDisplaying details:\n";

    for(int i = 0; i < size; i++) {
        cout << "\nManager " << i + 1 << endl;
        manager[i].putdata();
    }

    return 0;
}