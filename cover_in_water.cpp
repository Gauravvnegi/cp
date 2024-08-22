#include<bits/stdc++.h>
using namespace std;

int main() {
    int _;
    cin >> _;
    while (_--) {
        int n;
        string str;
        cin>>n>>str;
        int start = -1 , end =-1;
        int dot = 0;
        bool found = true;
        for(int i=0; i<n; i++) {
            if(str[i]=='.')dot++;
            if(i>0 && i<=n-1){
                if(str[i-1]=='.' && str[i]=='.' && str[i+1]=='.'){
                    cout<<2<<endl;
                    found = false;
                }
            }
        }
        if(found){
            cout<<dot<<end;
        }
    }
    return 0;
}
