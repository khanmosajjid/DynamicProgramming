#include <iostream>
using namespace std;

int UniquePaths(int m,int n){
    
    int arr[m][n];
    for(int i=0;i<m;i++){
         arr[i][0]=1;
        //  cout<<arr[i][0]<<" ";
    }
    for(int j=0;j<n;j++){
        arr[0][j]=1;
        // cout<<arr[0][j]<<" ";
    }
    
    
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            arr[i][j]=arr[i][j-1]+arr[i-1][j];
        }
    }
   
    return arr[m-1][n-1];
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    cout<<UniquePaths(m,n)<<endl;
	    
	}
	return 0;
}