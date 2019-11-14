#include<bits/stdc++.h>
using namespace std;

int lcs(char X[],char Y[]){

	int dp[100][100];
  
  int s1=strlen(X);
  int s2=strlen(Y);

  for(int i=0;i<=s1;i++){
  	dp[i][0]=0;
  }

  for(int j=0;j<=s2;j++){
  	dp[0][j]=0;
  }
  for(int i=1;i<=s1;i++){
  	for(int j=1;j<=s2;j++){
  		int q=0;
  		if(X[i-1]==Y[j-1]){
  			q=1+dp[i-1][j-1];
  		}
  		else{
  			q=max(dp[i-1][j],dp[j][i-1]);
  		}
  		dp[i][j]=q;
  	}
  }
  return dp[s1][s2];


}

int main(){
	char x[100],y[100];
	cin>>x>>y;

	cout<<lcs(x,y)<<endl;
	return 0;
}