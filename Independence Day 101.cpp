#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	// int o,w,g; cin>>o>>w>>g;
	// int x,y;
	vector<int> nums(3);
	for(auto &i: nums) cin>>i;
	sort(nums.begin(), nums.end());
	int sum= nums[0]+nums[1];
	if(nums[2]<=sum+1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
};
