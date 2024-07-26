#include<iostream>
#include<limits.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int arr[n][3];

	for( int i=0;i<n;i++){
		for(int j=0;j<3;j++){

			cin>> arr[i][j];
		}
		
	}

	int dp[n][3];
	dp[0][0]= arr[0][0];
	dp[0][1]= arr[0][1];
	dp[0][2]= arr[0][2];

	for( int day =1; day< n;day++){

		for( int activity=0; activity < 3; activity++){

			dp[day][activity]= INT_MIN;

			for( int choice = 0; choice < 3; choice++ ){

				if( choice != activity){

					dp[day][activity] = max(dp[day-1][choice]+arr[day][activity],dp[day][activity]);
				}
			}
		}
	}

	int maxHappiness= INT_MIN;
	
	for( int i=0; i<3 ;i++)
		maxHappiness= max( maxHappiness,dp[n-1][i]);

	cout<< maxHappiness<<" ";
	
}
