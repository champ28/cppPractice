#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
    }
    
    long count=0;
    for(int i=1;i<n;i++){
        
        while(arr[i]<arr[i-1]){
            arr[i]++;
            count++;
        }
            
    }
    cout<< count;
}
