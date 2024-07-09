#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int x,y;
	cin>>x>>y;
	cout<<min(x,y)<<" "<<max(x,y)<<endl;
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