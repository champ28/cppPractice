#include<iostream>
using namespace std;

bool findSubset(int index, int sum, int arr[],int size){

	if( index == size){
		if( sum !=0)
		return false;
		else
			return true;
	}

	if( sum == 0)
		return true;

	if( sum < 0)
		return false;

	return findSubset(index+1,sum-arr[index],arr,size) || 
			findSubset(index+1,sum,arr,size);
}

int main()
{  

	int n;
	cin >> n;
	int arr[n];

	for( auto &x: arr)
		cin>> x;

	for( auto x: arr)
		cout <<  x;

	cout<< endl;


	cout<<findSubset(0,5,arr,n);
	return 0;
}