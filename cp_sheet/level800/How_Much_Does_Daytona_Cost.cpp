#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        int n , k;
        cin>>n>>k;
        vector<int>arr(n);
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                flag = true;
            }
        }
        cout<<(flag==true ? "Yes" : "No")<<endl;
        
    }
}