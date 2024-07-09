#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int temp=INT_MAX;

	for(int i=0; i<n; i++){
		if(i+1>=n) break;
		int maxi= max(nums[i], nums[i+1]);
		temp= min(temp, maxi);
	}
	cout<<temp-1<<endl;
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