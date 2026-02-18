#include <iostream>
using namespace std;

void towerOfHanoi(int n, int A, int B, int C) {
    if (n == 1) {
        cout << "Move disk 1 from " << A << " to " << C << endl;
        return;
    }

    towerOfHanoi(n - 1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 1, 2, 3);
}
