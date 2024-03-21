#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	int x,y=1;
	if(n%2==0)
		x=n;
	else x=n-1;
	while(x>0 && y<=n){
		cout<<x<<" "<<y<<" ";
		x-=2;
		y+=2;
	}
	if(n%2!=0) cout<<n;
	cout<<endl;
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