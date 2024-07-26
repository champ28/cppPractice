#include<iostream>
using namespace std; 

int main(){

int n;
cin >> n;

int a[n];
for( auto &x : a ){

	cin >> x;
}

int dp[n];
dp[0]=0;
dp[1]=abs(a[1]-a[0]);
for( int i=2;i<n;i++){

dp[i]=min(dp[i-2]+abs(a[i-2]-a[i]),dp[i-1]+abs(a[i-1]-a[i]));

}
for( auto x: a){
	cout << x<<" ";   
}

cout<<endl;

//for( auto x: dp)
cout << dp[n-1]<<" ";



return 0;
}

    