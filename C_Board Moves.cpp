#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n;
    cin>>n;
    
    int ans=0;
    for (int i=1; i<=n/2; i++) {
        ans+= i*i;
    }
    cout<<ans*8<<endl;
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