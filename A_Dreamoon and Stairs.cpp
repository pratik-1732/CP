#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m; cin>>n>>m;
	if(n<m) cout<<-1<<endl;
	else{
		int x=n/2;
		if(n%2!=0) x++;
		//cout<<x<<endl;
		if(x%m==0) cout<<x<<endl;
		else {
			int y=x/m; y++;
			x=y*m;
			cout<<x<<endl;
		}
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