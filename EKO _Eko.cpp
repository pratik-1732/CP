#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m; cin>>n>>m;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	sort(nums.begin(), nums.end());
	int l=0, r=nums[n-1];
	int maxi=INT_MIN;
	int ans=0;
	while(l<=r){
		int cnt=0;
		int mid=(l+(r-l)/2);
		for(auto i: nums){
			if(i>=mid) cnt+=abs(i-mid);
		}
		// if(cnt==m) {
		// 	cout<<mid<<endl;
		// 	break;
		// }
		// maxi=max(mid, maxi);
		//  if(cnt>m) l=mid+1;
		// else if(cnt<=m) r=mid-1;
		if(cnt>=m){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
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