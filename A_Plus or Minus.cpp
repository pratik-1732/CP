#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b==c) cout<<"+"<<endl;
	else cout<<"-"<<endl;
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