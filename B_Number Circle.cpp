#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n; 
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	sort(nums.begin(), nums.end());
	vector<int> ans;
	for(int i=0; i<n; i++){
		if(i%2==0) ans.pb(nums[i]);
	}
	for(int i=n-1; i>=0; i--){
		if(i%2!=0) ans.pb(nums[i]);
	}
	//for(auto i: ans) cout<<i<<" ";
	
	for(int i=0; i<n; i++){
		if(i+2<n){
			if(ans[i]+ans[i+2]<=ans[i+1]){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
	for(auto i: ans) cout<<i<<" ";
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