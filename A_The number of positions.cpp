#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	// for(int i=a+1; i<=n; i++){
	// 	cout<<i<<" ";
	// }
	int ans=max(a+1, n-b);
	cout<<n-ans+1<<endl;
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