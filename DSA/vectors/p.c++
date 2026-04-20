#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        vector<int> a;
        while(q--){
            char type;
            cin >> type;
            if(type == 'a'){ int x; cin >> x; a.push_back(x); }
            else if(type == 'b') sort(a.begin(), a.end());
            else if(type == 'c') reverse(a.begin(), a.end());
            else if(type == 'd') cout << a.size() << " ";
            else if(type == 'e'){ for(auto x : a) cout << x << " "; }
            else if(type == 'f') sort(a.begin(), a.end(), greater<int>());
        }
        cout << endl;
    }
    return 0;
}