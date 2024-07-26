#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int result=1;
	int mod= 1000000007;
	
	while(n--){
	   result= (result*2)%mod;
	}
	
	cout<< fixed<<result;
}
