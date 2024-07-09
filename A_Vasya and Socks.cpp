#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m; cin>>n>>m;
	int cnt=0;
	cnt+=n;
	int temp=n/m;
	cnt+=temp;
	int x=temp+n;
	int y=x/m;
	while(y>0){

		y-=temp; temp+=y;
		if(y<=0) break;
		cnt+=y;
		//cout<<y<<" "<<cnt<<" "<<temp<<endl;
		y=(n+temp)/m;
	}
	cout<<cnt<<endl;	
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