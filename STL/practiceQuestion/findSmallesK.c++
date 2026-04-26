#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = lcm(3, 5);              // 15
    int ans = ((n + m - 1) / m) * m;
    cout << ans << endl;
    return 0;
}