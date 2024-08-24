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
        vector<int> arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end() , 0);
        cout<<-sum<<endl;
    }
}
