#include <bits/stdc++.h>
using namespace std;

int main() {
    int _;
    cin >> _;
    while (_--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool flag = false;

        for (int op = 0; op <= 5; op++) {
            // Check if the substring exists in x without using npos
            if (x.find(s) < x.size()) {
                cout << op << endl;
                flag = true;
                break;
            }
            x.append(x); // Duplicate the string
        }
        
        if (!flag) {
            cout << -1 << endl;
        }
    }
    return 0;
}
