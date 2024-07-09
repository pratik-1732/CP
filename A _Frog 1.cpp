#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

vector<int> dp;
vector<int> nums;
int minCost(int n){
	if(n==0) return 0;
	if(n==1) return abs(nums[0]-nums[1]);

	if(dp[n]!= -1){
		return dp[n];
	}
	int x= minCost(n-1)+ abs(nums[n-1]-nums[n]);
	int y= minCost(n-2)+ abs(nums[n-2]-nums[n]);
	
	return dp[n]=min(x,y);
}
void solve(){
	int n; cin>>n; 
	nums.resize(n);
	for(auto &i: nums) cin>>i;

	dp.resize(n);
	for(int i=0; i<n; i++) dp[i]=-1;

	cout<<minCost(n-1)<<endl;
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