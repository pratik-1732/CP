#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,f,k;
	cin>>n>>f>>k;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;
	int temp= nums[f-1];
	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());
	if(nums[k-1]>temp) cout<<"NO"<<endl;
	else if(nums[k-1]==temp){
		if(k!=n && nums[k]==temp) cout<<"MAYBE"<<endl;
		else cout<<"YES"<<endl;
	}
	else cout<<"YES"<<endl;
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