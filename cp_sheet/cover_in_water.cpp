#include <bits/stdc++.h>
using namespace std;

int main() {
    int _;
    cin >> _;
    while (_--) {
        int n;
        string str;
        cin >> n >> str;
        int dot = 0;
        bool foundTripleDots = false;

        // Loop through the string to find dots and check for triple dots
        for (int i = 0; i < n; i++) {
            if (str[i] == '.') dot++;
            if (i > 0 && i < n - 1) {
                // Check for three consecutive dots
                if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.') {
                    foundTripleDots = true;
                    break;
                }
            }
        }

        if (foundTripleDots) {
            cout << 2 << endl;
        } else {
            cout << dot << endl;
        }
    }
    return 0;
}
