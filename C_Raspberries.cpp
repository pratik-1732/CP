#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool check(set<int> count, int x){
	auto it=count.begin();
	for(it; it!=count.end(); it++){
		if(x==*it) return true;
	}
	return false;
}
void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	int prod=1;
	map<int, int> mp;

	for(auto &i: nums) {
		cin>>i;
		prod*=i;
		prod%=k;
		mp[i%k]++;
	}
	if(prod%k==0){
		cout<<0<<endl;
		return;
	}
	// if(mp[0]) {
	// 	cout<<0<<endl;
	// 	return;
	// }

	if(k==2){
		if(mp[1]) cout<<1<<endl;
	}
	else if(k==3){
		if(mp[2]) cout<<1<<endl;
		else cout<<2<<endl;
	}
	else if(k==4){
		if(mp[3]) cout<<1<<endl;
		else if(mp[2] && mp[1]) cout<<1<<endl;
		else if(mp[1]>=2) cout<<2<<endl;
		else cout<<3<<endl;
	}
	else if(k==5){
		if(mp[4]) cout<<1<<endl;
		else if(mp[3]) cout<<2<<endl;
		else if(mp[2]) cout<<3<<endl;
		else cout<<4<<endl;
	}
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