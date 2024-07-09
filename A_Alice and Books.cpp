#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int fix=nums[n-1];
	int maxi=INT_MIN;
	for(int i=0; i<n-1; i++){
		int x= fix+nums[i];
		maxi= max(maxi,x);
	}
	cout<<maxi<<endl;
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