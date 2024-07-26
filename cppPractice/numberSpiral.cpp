#include<bits/stdc++.h>
using namespace std;

long long findElement(long r, long c){
    
    long long ans;
    if( r > c){
        if( r%2 == 0){
            ans = (r*r) - (c-1);
        }
        else{
            ans = (r-1)*(r-1) + 1 + (c-1);
        }
        
    }
    else{
        if( c%2 != 0){
            ans = (c*c) - (r-1); 
        }
        else{
            ans = (c-1)*(c-1) + 1 + (r-1);
        }
        
    }
    return ans;
}

int main(){
    
    int t;
    long r, c;
    cin>>t;
    
    while(t--){
        
        cin>>r>>c;
        cout<<findElement(r,c)<<endl;
        
    }
    
    return 0;
}
