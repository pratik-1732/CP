#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m; cin>>n>>m;
	if(m>=n) cout<<-1<<endl;
	else if(m<n){
		cout<<2*m+1<<endl;
	} 
	// else cout<<m+n<<endl;
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