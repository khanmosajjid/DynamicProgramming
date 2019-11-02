#include<bits/stdc++.h>
using namespace std;


int maxProfit(int arr[],int n){
	if(n==0)return 0;

	int best=0;
	for(int i=1;i<=n;i++){
		int resultProfit=arr[i]+maxProfit(arr,n-i);
		best=max(resultProfit,best);
		cout<<" best is "<<best<<endl;
	}

	return best;

}


int main(){
	int arr[100],n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<maxProfit(arr,n);
}