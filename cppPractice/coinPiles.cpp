#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    int a,b;
    while(t--){
        
        cin>>a>>b;
        
        if( ( (2*b - a )%3 != 0  ||  (2*b-a)< 0  ) ||
        (    (2*a - b) < 0 || (2*a - b)%3 != 0  ) )
        cout<< "NO"<<endl;
        else
        cout<< "YES"<<endl;    
        
    }
    
}
