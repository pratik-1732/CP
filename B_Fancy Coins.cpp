#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int m,k,x,y;
	cin>>m>>k>>x>>y;

	int temp= m/k;
	int ans=0;
	m%=k;

	if(temp>y) ans+=temp-y;
	if(m>=x) {
		m-=x; x=0;
	}
	else if(m<x){
		x-=m; m=0;
	}
	int temp2= x/k;
	x-= k*temp2;
	ans-=temp2;
	if(m>0){
		m-=x;
		if(m>0) ans+=m;
	}

	if(ans>0) cout<<ans<<endl;
	else cout<<0<<endl;
	
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