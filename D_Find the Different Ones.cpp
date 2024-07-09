#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> temp(n,n);
	temp[n-1]=n;
	for(int i=n-2; i>=0; i--){
		if(nums[i]==nums[i+1]) temp[i]=temp[i+1];
		else temp[i]=i+1;
	}
	int q; cin>>q;
	while(q--){
		int l,r; cin>>l>>r;
		l--; r--;
		if(temp[l]>r) cout<<-1<<" "<<-1<<endl;
		else cout<<l+1<<" "<<temp[l]+1<<endl;
	}
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