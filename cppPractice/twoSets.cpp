#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long n;
	cin>>n;
	
	unsigned long long totalSum= (n*(n+1))/2;
	
	if( totalSum % 2 != 0)
	cout<< "NO";
	
	else{
	    cout<<"YES"<<endl;
	    
	    unsigned long long i=0,j=1;
	    unsigned long long halfSum= totalSum/2;
        unsigned long long sum=0;
	    
	    while( sum!= halfSum){
	        
	        while(sum<halfSum){
	            sum +=j;
	            j++;
	        }
	        j--;
	        while(sum>halfSum){
	            i++;
	            sum -= i;
	        }
	    }
	    
	    unsigned long long set1 = n-j+i;
	    unsigned long long set2 = j-i;
	    
	    cout<<set1<<endl;
	    unsigned long long printValue=1;
	    
	    while( printValue <= i){
	        cout<<printValue<<" ";
	        printValue++;
	    }
	    
	    unsigned long long jPrintValue = i+1;
	    printValue = j+1;
	    
	    while( printValue <= n ){
	        cout<<printValue<<" ";
	        printValue++;
	    }
	    cout<<endl;
	    cout<<set2<<endl;
	    
	    while( jPrintValue <= j){
	        cout<< jPrintValue<<" ";
	        jPrintValue++;
	    }
	 
	 cout<<endl;   
	}
}
