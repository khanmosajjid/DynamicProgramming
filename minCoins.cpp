#include<bits/stdc++.h>
using namespace std;

int minCoins(int n,int arr[],int t,int dp[]){
	if(n==0){
		return 0;
	}
	if(dp[n]!=0){
		dp[n];
	}
	int ans=INT_MAX;
	for( int i=0;i<t;i++){
		if(n-arr[i]>=0){
			int subProb=minCoins(n-arr[i],arr,t,dp);
			ans=min(ans,subProb+1);
		}
       
	}
	dp[n]=ans;
	return dp[n];
}

int main(){
	int n;
	int dp[1000]={0};
	cin>>n;
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	cout<<"minumu number of coins required are "<<minCoins(n,arr,t,dp)<<endl;
	return 0;
}