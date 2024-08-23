#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        int n;
        cin>>n;
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
}