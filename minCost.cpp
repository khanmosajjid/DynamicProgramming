#include<bits/stdc++.h>
using namespace std;


int minCost(int arr[][100],int m,int n){

   int dp[100][100]={};
    dp[0][0]=arr[0][0];

   for(int r=1;r<m;r++){
   	dp[r][0]=dp[r-1][0]+arr[r][0];//column first
   }
   for(int c=1;c<n;c++){
   	dp[0][c]=dp[0][c-1]+arr[0][c];
   }

   for(int i=1;i<m;i++){
   	   for(int j=1;j<n;j++){
   	   	dp[i][j]=min(dp[i][j-1],dp[i-1][j])+arr[i][j];
   	   }
   }
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		cout<<dp[i][j]<<" ";
    	}
    	cout<<endl;
    }

   return dp[m-1][n-1];
	
}

int main(){

	int arr[100][100]={ {1,2,3},
                    {4,8,2},
                    {1,5,3}
                     };

     cout<<minCost(arr,3,3)<<endl;

}