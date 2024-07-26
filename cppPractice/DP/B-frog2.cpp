#include<iostream>
#include<limits.h>
using namespace std;



int main()
{  

	int n,k;
	cin >> n >> k;
	int arr[n];

	for( auto &x: arr)
		cin>> x;

	int dp[n];
	dp[0]=0;
	dp[1]= abs(arr[1]-arr[0]);

	for( int i =2;i<n;i++){

		dp[i]= INT_MAX;
		for( int j=1;j<=k;j++){

			if( i-j >= 0)
			dp[i]= min( dp[i],dp[i-j] + abs( arr[i] - arr[ i-j]));
		}
	}
	cout << dp[n-1]<<endl;

	// for( auto x: dp)
	// 	cout << x<< " ";
	return 0;
}