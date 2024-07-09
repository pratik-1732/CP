#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	int k; cin>>k;
	while(k--){
		int l,r; cin>>l>>r;
		int st=0, en=n-1;
		int mid; int cnt=0; int ans=0;
		while(st<=en){
			mid=(st+(en-st)/2);
			if(nums[mid]<l) st=mid+1;
			else{
				ans=mid;
				en=mid-1;
			}
		}
		st=0, en=n-1;
		while(st<=en){
			mid=(st+(en-st)/2);
			if(nums[mid]>r) en=mid-1;
			else{
				cnt=mid;
				st=mid+1;
			}
		}
		
		if(ans!=0)
			cout<<cnt-ans+1<<" ";
		else cout<<0<<endl;
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