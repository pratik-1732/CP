#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m; cin>>n>>m;
	vector<int> a(n);	
	vector<int> b(m);
	for(auto &i: a) cin>>i;	
	for(auto &i: b) cin>>i;
	int i=0, j=0;
	vector<int> ans;

	while(i<a.size() && j<b.size()){
		if(a[i]<=b[j]){
			ans.pb(a[i]);
			i++;
		}
		else{
			ans.pb(b[j]);
			j++;
		}
	}	
	if(i<a.size()){
		while(i<a.size()){
			ans.pb(a[i]);
			i++;
		}
	}
	else if(j<b.size()){
		while(j<b.size()){
			ans.pb(b[j]);
			j++;
		}
	}
	for(auto i: ans) cout<<i<<" ";

	cout<<endl;
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