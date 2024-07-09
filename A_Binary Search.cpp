#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k; cin>>n>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
		
	while(k--){
		int x; cin>>x;
		bool ans=false;
		int l=0, r=n-1;
		while(l<=r){
			int mid=(l+(r-l)/2);
			if(nums[mid]==x){
				ans=true;
				break;
			}
			else if(nums[mid]<x) l=mid+1;
			else r=mid-1;
		}
		// cout<<ans<<endl;
		if(ans==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
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