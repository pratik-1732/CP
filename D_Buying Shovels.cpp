#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k; cin>>n>>k;
	//vector<pair<int,int>> packages;
	vector<int> packages;
	if(n<=k) cout<<1<<endl;
	else{
		for(int i=1; i<=sqrt(n); i++){
			if(n%i==0){
				packages.pb(i);
				int x=n/i;
				//packages.pb(make_pair(x,i));
				packages.pb(x);
			}
		}
		sort(packages.begin(), packages.end());
		int len=packages.size();
		int mini=n;
		for(auto i: packages){
			if(i<=k){
				mini=min(mini, n/i);
			}
		}
		cout<<mini<<endl;
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