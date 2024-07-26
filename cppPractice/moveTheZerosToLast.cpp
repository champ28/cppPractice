#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int n;
    cin>>n;
    
    int arr[n];
    for( auto &x: arr) cin>>x;

    
    int i=0;
    for(int j=0;j<n;j++){
            if( arr[j]!=0 )
            {
                swap( arr[j], arr[i]);
                i++;
            }
    }
    
    for( auto x: arr) cout<<x<<" ";
}
