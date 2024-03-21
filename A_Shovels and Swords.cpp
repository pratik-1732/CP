#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b; cin>>a>>b;
	int cnt=0;
	
	if(a==0 || b==0) cout<<cnt<<endl;
	//else{
		// while(a>0 && b>0){
		// 	//cout<<"h"<<" ";
		// 	if(a>=b){
		// 		a-=2; b-=1;
		// 		if(a<0 || b<0) break;
		// 		cnt++;
		// 	}
		// 	else{
		// 		a-=1; b-=2;
		// 		if(a<0 || b<0) break;
		// 		cnt++;
		// 	}
		// }	
		// cout<<cnt<<endl;	
	//}
	else if(a>=2*b) cout<<b<<endl;
	else if(b>=2*a) cout<<a<<endl;
	else cout<<(a+b)/3<<endl;
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