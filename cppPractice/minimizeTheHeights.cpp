//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        
        sort( arr,arr+n);
        
        int smallest;
        int largest;
        int res= arr[n-1]-arr[0];
        
        for( int i=0; i<n-1;i++){
            
            if( arr[i+1]-k >= 0){
            largest= max(arr[n-1]-k, arr[i] + k  );
            smallest= min( arr[0]+k,arr[i+1]-k);
            res= min( res, largest - smallest);
            }
        }
        
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
