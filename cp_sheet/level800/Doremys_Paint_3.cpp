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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if (mp.size() == 2)
        {
            // int diff = ;
            auto it = mp.begin();
            int freq1 = it->second;
            ++it;
            int freq2 = it->second;
            cout << (abs(freq1 - freq2) <= 1 ? "Yes" : "No") << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
