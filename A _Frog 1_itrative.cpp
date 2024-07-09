#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> dp(n);
	for(int i=0; i<n; i++) dp[i]=-1;

	dp[0]=0; dp[1]=abs(nums[0]-nums[1]);
	for(int i=2; i<n; i++){
		int x= abs(nums[i-1]-nums[i]);
		int y= abs(nums[i-2]-nums[i]);
		if(i<=2)
			dp[i]=min(x,y)+ dp[i-1];
		else
			dp[i]=min(x,y)+ min(dp[i-1], dp[i-2]);
	}	
	cout<<dp[n-1]<<endl;
	for(auto i: dp) cout<<i<<" ";
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