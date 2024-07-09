#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> strength(n);
	for(auto &i: strength) cin>>i;

	sort(strength.begin(), strength.end());
	int mini=INT_MAX;
	for(int i=0; i<n; i++){
		if(i+1>=n) break;
		int x= strength[i+1]-strength[i];
		mini=min(mini, x);
	}
	cout<<mini<<endl;
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