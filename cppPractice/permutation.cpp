#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
        
    if(n==1) cout<<n; 
    
    else if(n==2 || n==3) cout<<"NO SOLUTION";
    
    else if(n==4) cout<<"3 1 4 2";
    
   
    else{
        int count=0;
        int i=1, j=2;
    
        while( i<=n ){
    
            if(i%2!=0)
            cout<<i<<" "; 
            
            i=i+2;
        }
        
        while( j<=n ){
            
            if( j%2 == 0)
            cout<<j<<" ";
        
            j=j+2;
        }   
    }    
    return 0;
}
