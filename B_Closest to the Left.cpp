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
		int l=0, r=n-1;
		int mid; int ans=0;
		while(l<=r){
			mid=(l+(r-l)/2);
			if(nums[mid]>x) r=mid-1;
			else{
				ans=mid+1;
				l=mid+1;
			}
		}
		cout<<ans<<endl;
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