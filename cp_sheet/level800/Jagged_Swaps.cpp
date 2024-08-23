#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (arr[0] != 1)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
        }
    }
}