#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int x; cin>>x;
	int maxi= INT_MIN, ans=0;
	for(int i=1; i<x; i++){
		int temp= __gcd(x,i)+i;
		if(temp>=maxi){
			maxi= temp;
			ans= i;
		}
	}	
	cout<<ans<<endl;
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