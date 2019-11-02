#include<bits/stdc++.h>
using namespace std;

//solving profit for rod cuttion using memoization
int memo[100];


int maxProfit(int arr[],int n){
	if(n==0)return 0;

	if(memo[n]!=-1){
		return memo[n];
	}

	int best=0;
	for(int i=1;i<=n;i++){
		int resultProfit=arr[i]+maxProfit(arr,n-i);
		best=max(resultProfit,best);
		
	}
	int ans=best;
	memo[n]=ans;

	return ans;

}


int main(){
	int arr[100],length;
	cin>>length;

	fill(memo,memo+length+1,-1);

	for(int i=1;i<=length;i++){
		cin>>arr[i];
	}
	cout<<maxProfit(arr,length);
}