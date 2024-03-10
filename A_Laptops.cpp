#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 


bool solve(){
	int n; cin>>n;
	vector<pair<int, int>> laptops;
	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		laptops.pb(make_pair(x,y));
	}
	sort(laptops.begin(), laptops.end());
	for(int i=0; i<n; i++){
		if(i+1>=n) break;
		if(laptops[i].first<laptops[i+1].first){
			if(laptops[i].second>laptops[i+1].second) return true;
		}
	}
	return false;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	bool ans= solve();
	if(ans==1) cout<<"Happy Alex"<<endl;
	else cout<<"Poor Alex"<<endl;
	}
	return 0;
}