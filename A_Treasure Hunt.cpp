#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x,y; cin>>x>>y;
	int m=abs(c-a);
	int n=abs(d-b);
	if(m%x==0 && n%y==0){
		m=m/x; n=n/y;
		if(abs(m-n)%2==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
		
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