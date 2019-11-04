#include <bits/stdc++.h>
using namespace std;


int maxSum(int arr[], int N, int K) 
{ int dp[N];
	 dp[0]=0;
	 sort(arr,arr+N);
	for(int i=1;i<N;i++){
	    dp[i]=dp[i-1];
	    
	    if(arr[i]-arr[i-1]<K){
	        if(i>=2){
	            dp[i]=max(dp[i],dp[i-2]+arr[i]+arr[i-1]);
	        }
	        else{
	            dp[i]=max(dp[i],arr[i]+arr[i-1]);
	        }
	    }
	  
	}
     return dp[N-1];
} 


int main() {
	int arr[1000],t;
	
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    cout<<maxSum(arr,n,k)<<endl;
	}
	return 0;
}