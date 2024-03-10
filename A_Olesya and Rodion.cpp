#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,t;
	cin>>n>>t;
	//int ans=pow(10,n);
	// int ans=1;
	// for(int i=0; i<n; i++){
	// 	ans*=10;
	// }
	// cout<<ans<<endl;
	// if(t>9) ans=/10;
	// ans*=t;
	// cout<<ans<<endl;

	vector<int> ans;
	if(t>9) n--;
	ans.pb(1);
	n--;
	for(int i=0; i<n; i++){
		ans.pb(0);
	}
	ans[0]=t;
	if(n==-1 && t>9) cout<<-1;
	else{
		for(auto i: ans){
			cout<<i;
		}	
	}
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