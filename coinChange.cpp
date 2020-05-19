#include <bits/stdc++.h>
using namespace std;

int coinChange(int m,int arr[],int n){
    int dp[n];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=0;
    }
    
    for(int i=0;i<m;i++){
        int x=arr[i];
        for(int j=x;j<=n;j++){
            dp[j]+=dp[j-x];
        }
    }
    return dp[n];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int arr[m];
	    
	       for(int i=0;i<m;i++){
	           cin>>arr[i];
	       }
	       int n;
	       cin>>n;
	       cout<<coinChange(m,arr,n)<<endl;
	}
	return 0;
}