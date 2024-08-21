#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	if(n==2){
		cout<<1<<endl;
	}
	else{
		int temp= n/4;
		n= n%4;
		temp+=(n/2);
		cout<<temp<<endl;
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