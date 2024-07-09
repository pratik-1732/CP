#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int dp[100001];

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	map<int, int> mp;
	for(auto i: nums) mp[i]++;

	for(int i=0; i<100001; i++){
		dp[i]=0;
	}

	dp[1]=mp[1];
	for(int j=2; j<100001; j++){
		dp[j]= max(dp[j-1], dp[j-2]+ j*mp[j]);
	}
	cout<<dp[100000]<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	solve();
	}
	return 0;
}