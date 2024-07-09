#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	if(n==1 || n==2) cout<<"No"<<endl;
	else{
		vector<int> even;
		vector<int> odd;
		for(int i=1; i<=n; i++){
			if(i%2==0) even.pb(i);
			else odd.pb(i);
		}
		cout<<"Yes"<<endl;
		cout<<even.size()<<" ";
		for(auto i: even) cout<<i<<" ";
		cout<<endl;
		cout<<odd.size()<<" ";
		for(auto i: odd) cout<<i<<" ";
		cout<<endl;
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