#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;

	int temp =0;
	if(n%2!=0) cout<<temp;
	else{
        temp= pow(2,(n/2));
    	cout<<temp;
	}
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