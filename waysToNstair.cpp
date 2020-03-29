#include <bits/stdc++.h>
using namespace std;
int ways(int n){
    int arr[n];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-2]+1;
    }
    return arr[n];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<ways(n)<<endl;
	}
	return 0;
}