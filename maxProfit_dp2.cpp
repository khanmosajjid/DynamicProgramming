#include<bits/stdc++.h>
using namespace std;

//using bottom-up approach to solve maxProfit problem

int maxProfit(int arr[],int n){
	int dp[100][100]={};

	int year=n;
	for(int i=0;i<n;i++){
		dp[i][i]=year*arr[i];
	}
	year--;

	for(int length=2;length<=n;length++){
		int str=0;
		int end=n-length;
		while(str<=end){
			int endWindow=str+length-1;
			dp[str][endWindow]=max(
				(arr[str]*year+dp[str+1][endWindow]),(arr[endWindow]*year+dp[str][endWindow-1]));
			++str;
		}
		year--;
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(3)<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[0][n-1];
}


int main(){
	int n,arr[100];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}



	cout<<maxProfit(arr,n);
	return 0;
}