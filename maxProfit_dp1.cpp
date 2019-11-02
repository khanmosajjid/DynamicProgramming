#include<bits/stdc++.h>
using namespace std;

int memo[100][100];//using memoization for reducing time complexity


int profit(int a[],int be,int end,int year){
	
    if(be>end){
    	return 0;
    }

    if(memo[be][end]!=-1){
    	return memo[be][end];
    }


	int q1=a[be]*year+profit(a,be+1,end,year+1);
	int q2=a[end]*year+profit(a,be,end-1,year+1);

	int ans=max(q1,q2);

	memo[be][end]=ans;

	return ans;
}

int main(){
	int n,a[1000];
	cin>>n;

	memset(memo,-1,sizeof(memo));
	

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<profit(a,0,n-1,1);
	return 0;
}