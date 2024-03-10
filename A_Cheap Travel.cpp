#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	
	int x=n/m;
	int y=n-(m*x);
	int z=min(n*a,((x*b)+(y*a)));
	z=min(z,((n/m)+1)*b);
	cout<<z;
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