#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	map<string, int> count;
	for(int i=0; i<n; i++){
		string s; cin>>s;
		count[s]++;
	}
	
	int maxi=INT_MIN; string ans;
	for(auto i: count){
		if(i.second>maxi) {
			ans=i.first;
			maxi=i.second;
		}
	}
	// if(count[0].second>count[1].second) cout<<count[0].first<<endl;
	// else cout<<count[1].first<<endl;
	cout<<ans<<endl;
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