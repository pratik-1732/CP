#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,x; cin>>n>>x;
	vector<pair<int,int>> vp(n);
	for(int i=0; i<n; i++){
		cin>>vp[i].first;
		vp[i].second=i;
	}	
	sort(vp.begin(), vp.end());
	vector<int> ans;
	for(int i=0; i<n; i++){
		int temp= x-vp[i].first;
		int l=i+1, r=n-1;
		while(l<r){
			int sum=vp[l].first+vp[r].first;
			if(sum==temp){
				ans.pb(vp[i].second);
				ans.pb(vp[l].second);
				ans.pb(vp[r].second);
				break;
			}
			else if(sum<temp) l++;
			else r--;
		}
		if(ans.size()>0) break;
	}
	if(ans.size()>0){
		sort(ans.begin(), ans.end());
		for(auto i: ans) cout<<i+1<<" ";
	}
	else cout<<"IMPOSSIBLE"<<endl;

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