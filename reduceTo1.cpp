#include<bits/stdc++.h>
using namespace std;
const int inf =(int)1e9;
int memo[10000];

int reduce(int n){
	if(n==1){
		return 0;
	}
	if(memo[n]!=-1){
		return memo[n];
	}
	int a1=inf,a2=inf,a3=inf;
	if(n%3==0){
		a3=1+reduce(n/3);
		
	}
	 if(n%2==0){
		a2=1+reduce(n/2);

	}
	 a1=1+reduce(n-1);
	memo[n]=min(a1,min(a2,a3));
	return memo[n];
}
	

int dp_reduce(int n){
	int dp[10000];
	dp[0]=0;
	dp[1]=1;
	
int a1=inf,a2=inf,a3=inf;
	for(int i=2;i<=n;i++){
		if(i%3==0) a3=1+dp[i/3];
		if(i%2==0) a2=1+dp[i/2];

		a1=1+dp[i-1];

		dp[i]=min(a1,min(a2,a3));
	}
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	fill(memo,memo+n+1,-1);
	cout<<"minimun step to reduce to 1 is "<<reduce(n)<<endl;
	cout<<"dp solution of reduce to 1 is "<<dp_reduce(n)<<endl;
	return 0;
}