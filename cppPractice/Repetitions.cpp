#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string str;
    cin>>str;
    
    int count=0;
    int maxCount=0;
    int i=0,j=0;
    
    while( j<str.size() ){
        
        if(str[i]==str[j])
        j++;
        
        else{

            i=j;
            j++;
            
        } 
        count=j-i;
        maxCount= max(count,maxCount);
        
    }
    cout<< maxCount;
}
