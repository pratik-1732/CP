#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int l=1, r=1e9;
	int ans=0;
	while(l<=r){
		int mid= l+(r-l)/2;
		int cuts=0;
		for(auto i: nums){
			if(i%mid==0) cuts+=((i/mid)-1);
			else cuts+=(i/mid);
		}
		if(cuts<=k) {
			ans=mid;
			r=mid-1;
		}
		else
			l=mid+1;
	}	
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