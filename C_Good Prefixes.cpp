#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	
	if(n==1){
		if(nums[0]==0) {
			cout<<1<<endl;
			return;
		}
		else {
			cout<<0<<endl;
			return;
		}
	}	

	int maxi= INT_MIN;
	vector<int> presum;
	int sum=0, m=0, cnt=0;
	for(auto i: nums){
		sum+=i;
		presum.pb(sum);
		m= max(m, i);
		if(sum-m==m) cnt++;
	}
	map<int, int> mp;
	for(auto i: nums) mp[i]++;
	for(auto i: presum) mp[i]++;

	// int cnt=0;
	// for(auto i: mp){
	// 	if(i.second>1) cnt++;
	// }
	cout<<cnt<<endl;

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