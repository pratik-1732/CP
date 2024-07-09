#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b;
	cin>>a>>b;
	
	if(b!=1) {
	    cout<<"YES"<<endl;
	    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }
    else cout<<"NO"<<endl;
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