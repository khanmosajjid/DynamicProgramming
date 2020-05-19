#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 
	   while(t--){
	       int n,w;
	       cin>>n>>w;
	       int val[n];
	       int weight[n];
	       
	       for(int i=0;i<n;i++){
	           cin>>val[i];
	       }
	       for(int i=0;i<n;i++){
	           cin>>weight[i];
	       }
	       int dp[w+1];
	       memset(dp,0,sizeof dp);
	         
	           for(int i=0;i<=w;i++){
	               for(int j=0;j<n;j++){
	                   if(weight[j]<=i){
	                       dp[i]=max(dp[i],dp[i-weight[j]]+val[j]);
	                   }
	               }
	           }
	           cout<<dp[w]<<endl;
	   }
	return 0;
}