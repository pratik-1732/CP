#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

map<pair<int,int>, int> mp;
int check(int l, int r){
	if(mp.find(make_pair(l,r)) != mp.end()){
		return mp[make_pair(l,r)];
	}
	int z; 
	cout<<"? "<<l<<" "<<r<<endl;
	cin>>z;
	mp[make_pair(l,r)]=z;
	return z;
}
void solve(){
	int n; cin>>n;
	int l=1, r=n;
	while(r-l>1){
		int mid= l+(r-l)/2;
		int z=check(l,r);
		if(z>mid) {
			int x=check(mid,r);
			if(x==z) l=mid;
			else r=mid;
		}
		else{
			int x=check(l,mid);
			if(x==z) r=mid;
			else l=mid;
		}
	}
	int z=check(l,r);
	if(z==l) cout<<"! "<<r<<endl;
	else cout<<"! "<<l<<endl;
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