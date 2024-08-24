#include <bits/stdc++.h>
using namespace std;

#define inputArray(arr, n)      \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr, n);

    int closest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(closest) ||
            (abs(arr[i]) == abs(closest) && arr[i] > closest))
        {
            closest = arr[i];
        }
    }

    cout << abs(closest) << endl;
}