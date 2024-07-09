#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b,n,s;
	cin>>a>>b>>n>>s;
	int temp = s/n, x= s%n;
	if(a>=temp){
		if(b>=x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else{
		s-=(a*n);
		if(s<=b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
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