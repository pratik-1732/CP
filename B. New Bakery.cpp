#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int summation(int x){
	if(x%2==0) return (x/2)*(x+1);
	else return x*((x+1)/2);
}
void solve(){
	int n,a,b; cin>>n>>a>>b;
	if(b<=a) {
		cout<<n*a<<endl;
	}
	else{
		if(b-a+1<=n) {
			int ans= summation(b)-summation(a-1);
			ans+=(n-(b-a+1))*a;
			cout<<ans<<endl;
		}
		else{
			int ans= summation(b)-summation(b-n);
			cout<<ans<<endl;
		}
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