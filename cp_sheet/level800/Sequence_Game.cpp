#include <bits/stdc++.h>
using namespace std;

#define inputArray(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];

int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        int n, k;
        cin >> n ;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end() , 0);
        cout<<-sum<<endl;
    }
}
