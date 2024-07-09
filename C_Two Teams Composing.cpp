#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	map<int, int> count;
	for(auto i: nums) count[i]++;

	vector<pair<int, int>> vp;
	for(auto i: count){
		vp.pb(make_pair(i.second, i.first));
	}
	sort(vp.begin(), vp.end());
	int temp=n/2;	int ans=0;
	//for(int i=vp.size()-1; i>=0; i--){
	int i=vp.size()-1;
	while(temp>0){
		if(vp[i].first>=temp && vp.size()>temp){
			ans=max(temp,ans);
			temp--;
		}
		else if(vp[i].first>temp && vp.size()==temp){
			ans=max(temp,ans);
			temp--;
		}
		else temp--;
	}
	//}
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