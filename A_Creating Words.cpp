#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string a,b;
	cin>>a>>b;
	char ch= a[0];
	a[0]=b[0];
	b[0]=ch;
	cout<<a<<" "<<b<<endl;
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