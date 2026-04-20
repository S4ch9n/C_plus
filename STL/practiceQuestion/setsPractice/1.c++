#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<set<int>> setOperations(set<int> A, set<int> B) {
    set<int> uni, diff, inter;

    set_union(A.begin(), A.end(), B.begin(), B.end(),
              inserter(uni, uni.begin()));

    set_difference(A.begin(), A.end(), B.begin(), B.end(),
                   inserter(diff, diff.begin()));

    set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                     inserter(inter, inter.begin()));

    return {uni, diff, inter};
}

void printSet(const set<int>& s) {
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    set<int> A = {1, 2, 3, 4};
    set<int> B = {3, 4, 5, 6};

    vector<set<int>> result = setOperations(A, B);

    cout << "Union: ";
    printSet(result[0]);

    cout << "Difference (A - B): ";
    printSet(result[1]);

    cout << "Intersection: ";
    printSet(result[2]);

    return 0;
}