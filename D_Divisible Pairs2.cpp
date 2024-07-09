#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x,y; cin>>n>>x>>y;
	vector<pair<int,int>> nums(n);
	for(int i=0; i<n; i++){
		int m; cin>>m;
		nums[i]=make_pair(m%x, m%y);
	}
	map<pair<int, int>, int> temp;
	vector<pair<int, int>> alpha(n);

	// for(auto i: nums) {
	// 	if(temp[i]==1) continue;
	// 	else temp[i]++;
	// }

	// for(auto i: temp){
	// 	cout<<i.first.first<<" "<<i.first.second<<"- "<<i.second<<endl;
	// }
	int ans=0;
	map<vector<int>, int> count;

	for(int i=0; i<n; i++){
		int p= (x-nums[i].first)%x;
		int q= nums[i].second;
		//if(temp[{p,q}]==1) temp[{p,q}]++;
		// alpha[i]= make_pair(p,q);
		ans+=count[{p,q}];
		count[{nums[i].first, nums[i].second}]++;
	}
	
	// for(int i=0; i<n; i++){
	// 	vector<int> v;
	// 	v.pb(nums[i].first); v.pb(nums[i].second);
	// 	v.pb(alpha[i].first); v.pb(alpha[i].second);
	// 	sort(v.begin(), v.end());
	// 	count[v]++;
	// }
	// for(auto i: count){
	// 	if(i.second>1) ans+=(i.second-1);
	// }
	// int ans=0;
	// for(auto i: temp){
	// 	if(i.second>1) ans+=(i.second-1);
	// }
	 cout<<ans<<endl;
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