#include <bits/stdc++.h>
using namespace std;


int maxSum(int n){
    
    int dp[100000]={};
    //base case 
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=max(dp[i/2]+dp[i/3]+dp[i/4],i);
    }
    return dp[n];
    
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    
	    
	    cout<<maxSum(n)<<endl;
	    
	}
	return 0;
}