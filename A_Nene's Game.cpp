#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int k,q; cin>>k>>q;
	vector<int> a(k);
	for(auto &i: a) cin>>i;
	vector<int> n(q);
	for(auto &i: n) cin>>i;
	for(auto i: n){
		if(i==a[0]) cout<<a[0]-1<<" ";
		else if(i>a[0]) cout<<a[0]-1<<" ";
		else if(i<a[0]) cout<<i<<" ";
	}
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