#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> nums;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		nums.pb(x);
	}	
	vector<int> ans;
	ans.pb(nums[0]);
	int cnt=0;
	for(int i=0; i<n; i++){
		if(i+1>=n) break;

		if(__gcd(nums[i],nums[i+1])==1) ans.pb(nums[i+1]);
		else{
			cnt++;
			int x=1;
			while(__gcd(nums[i],x)!=1 || __gcd(nums[i+1],x)!=1){
				x++;
			}
			 ans.pb(x); ans.pb(nums[i+1]);
		}
	}
	cout<<cnt<<endl;
	for(auto i: ans){
		cout<<i<<" ";
	}
	cout<<endl;
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