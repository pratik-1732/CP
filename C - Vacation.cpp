#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 
int points[100003][3];
int dp[100003][3];

int output(int i, int j){
	if(i==1)
		return points[i][j];

	if(dp[i][j]!=-1) return dp[i][j];

	int maxi=INT_MIN;
	for(int k=0; k<3; k++){
		if(k!=j){
			maxi=max(maxi, output(i-1, k)+points[i][j]);
		}
	}

	return dp[i][j]=maxi;
}

void solve(){
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=0; j<3; j++){
			cin>>points[i][j];
		}
	}
	int x= output(n,0), y=output(n,1), z=output(n,2);
	int ans= max(x,y);
	cout<<max(ans, z)<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;

	for(int i=0; i<100003; i++){
		for(int j=0; j<3; j++){
			dp[i][j]=-1;
		}
	}
	while(t--){
	solve();
	}
	return 0;
}