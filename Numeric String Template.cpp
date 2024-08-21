#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool check(vector<int> &nums, string &s, int l, int  r){
	while(l<=r){
		if(nums[l]==nums[r]){
			if(s[l]!=s[r]){
				return false;
			}
			else{
				l++; r--;
			}
		}
		else{
			if(s[l]==s[r]){
				return false;
			}
			else{
				l++; r--;
			}
		}
	}
	return true;
}
void solve(){
	int n; cin>>n; 
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	int m; cin>>m;
	vector<string> str(m);
	for(auto &i: str) cin>>i;

	int i=0;
	while(i<m){
		string s= str[i];
		if(s.length()!=n){
			cout<<"NO"<<endl;
			i++;
		}
		else{
			int l=0, r=n-1;
			bool ans= check(nums, s, l, r);
			if(ans) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			i++;		
		}
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