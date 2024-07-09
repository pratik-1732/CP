#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> heights(n);
	for(auto &i: heights) cin>>i;

	
	vector<int> dp(n, -1);
	dp[n-1]= heights[n-1];
	for(int i=n-2; i>=0; i--){
		if(heights[i]>heights[i+1]) {
			if(heights[i]>dp[i+1]) dp[i]=heights[i];
			else dp[i]= dp[i+1]+1;
		}
		else dp[i]= dp[i+1]+1;
	}
	sort(dp.begin(), dp.end());
	cout<<dp[n-1]<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	solve();
	}

	return 0;
}