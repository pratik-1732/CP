#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	stack<int> st;
	vector<int> ans(n);
	for(int i=n-1; i>=0; i--){
		while(!st.empty() && nums[i]>=st.top()){
			st.pop();
		}
		if(!st.empty()) ans[i]=st.top();
		else ans[i]=-1;

		st.push(nums[i]);
	}
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