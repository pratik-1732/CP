#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	int ans=0;
	for(int i=1; i<=n; i++){
		ans+= pow(2,i);
	}
	cout<<ans<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	solve();
	}
	return 0;
}