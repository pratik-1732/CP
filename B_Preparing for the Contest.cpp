#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> ans;
	int temp=1;
	while(k+1>0 && k!=0){
		ans.pb(temp);
		temp++;
		k--;
	}
	int l=ans.size();
	temp=n; int x=n-l;
	while(x>0){
		ans.pb(temp);
		temp--;
		x--;
	}
	for(auto i: ans){
		cout<<i<<" ";
	}
	cout<<endl;
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