#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n-1);
	for(auto &i: nums) cin>>i;

	vector<int> ans;
	ans.pb(nums[0]+1);
	for(int i=0; i<n-1; i++){
		int x= ans[i]+nums[i];
		if(i+1<n-1 && x>nums[i+1]) {
			ans.pb(x);
		}
		else if(i+1<n-1 && x<=nums[i+1]){
			int y= nums[i+1]/ans[i];
			y++;
			ans.pb(ans[i]*y+nums[i]);
		}
	}
	ans.pb(nums[n-2]+ans[n-2]);

	for(auto i: ans) cout<<i<<" ";
	cout<<endl;
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