#include<bits/stdc++.h>
using namespace std;

int main() {
    int _;
    cin >> _;
    while (_--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        
        // Input the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
     
            int maxi = INT_MIN;
            int last = 0 ;

            for (int i = 0; i < n; i++) {
                // int diff_patrol = abs(arr[i] - last);
                maxi = max(maxi,arr[i] - last);
                last = arr[i];
            }
          
            maxi = max(maxi, 2 * (x - last));
            
           
            cout << maxi << "\n";
        
    }
    return 0;
}
