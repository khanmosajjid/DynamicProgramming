#include <bits/stdc++.h>
using namespace std;

int minOp(int n){
    int arr[n];
     arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    
    for(int i=3;i<=n;i++){
        if(i%2==0){
            arr[i]=arr[i/2]+1;
        }
        else{
            arr[i]=arr[i-1]+1;
        }
    }
    return arr[n];
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<minOp(n)<<endl;
	}
	return 0;
}