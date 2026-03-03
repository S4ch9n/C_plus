#include <iostream>
using namespace std;

class sample {
    int a;

public:
    void setdata(int x) {
        a = x;
    }

    void showdata() {
        cout << "a = " << a << endl;
    }

    friend sample add(sample s1, sample s2);
};

sample add(sample s1, sample s2) {   // returning object
    sample s3;
    s3.a = s1.a + s2.a;
    return s3;   // returning object
}

int main() {
    sample x, y, z;

    x.setdata(10);
    y.setdata(20);

    z = add(x, y);   // function returns object

    z.showdata();

    return 0;
}