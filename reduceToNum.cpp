#include <bits/stdc++.h>
using namespace std;

int score(int n){
    int table[n+1];
    for(int i=0;i<=n;i++){
        table[i]=0;
    }
    table[0]=1;
    
    for(int i=3;i<=n;i++){
        table[i]+=table[i-3];
    }
     for(int i=5;i<=n;i++){
        table[i]+=table[i-5];
    }
     for(int i=10;i<=n;i++){
        table[i]+=table[i-10];
    }
    return table[n];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<score(n)<<endl;
	}
	return 0;
}C