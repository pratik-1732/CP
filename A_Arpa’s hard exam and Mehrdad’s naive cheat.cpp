#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	int temp=n%4;
	if(n==0) cout<<1<<endl;
	else if(temp==0) cout<<6<<endl;	
	else if(temp==1) cout<<8<<endl;	
	else if(temp==2) cout<<4<<endl;	
	else cout<<2<<endl;	
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