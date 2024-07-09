#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> arr(n);
	for(auto &i: arr) cin>>i;
	map<int,int> count;
	for(auto i: arr) count[i]++;
	int cnt=0;
	for(auto i: count){
		if(i.second==2) cnt++;
	}
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