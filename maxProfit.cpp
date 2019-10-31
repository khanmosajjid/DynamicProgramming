#include<bits/stdc++.h>
using namespace std;


int profit(int a[],int be,int end,int year){
	if(be>end){
      return 0;
	}

	int q1=a[be]*year+profit(a,be+1,end,year+1);
	int q2=a[end]*year+profit(a,be,end-1,year+1);

	return max(q1,q2);
}

int main(){
	int n,a[1000];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<profit(a,0,n-1,1);
	return 0;
}