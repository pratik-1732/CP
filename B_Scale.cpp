#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
	cin>>n>>k;
	vector<string> nums;
	for(int i=0; i<n; i++){
		string s; cin>>s;
		nums.pb(s);
	}

	vector<string> ans;
	for(int i=0; i<n; i+=k){
		string temp = nums[i];
		string s="";
		for(int j=0; j<n; j+=k){
			s+=temp[j];
		}
		ans.pb(s);
	}

	for(auto i: ans){
		cout<<i<<endl;
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