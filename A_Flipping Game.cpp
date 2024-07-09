#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	int temp=0, cnt=0, maxi= INT_MIN;
	for(auto &i: a) {
		cin>>i;
		if(i==0) temp++;
		else{
			temp--;
			cnt++;
		}
		if(temp>=maxi) maxi=temp;

		if(temp<0) temp=0;
	}
	cout<<maxi+cnt<<endl;
	// if(n==1){
	// 	if(a[0]==1) cout<<0<<endl;
	// 	else cout<<1<<endl;
	// 	return;
	// }
	// vector<int> ans;
	// if(a[0]==1) ans.pb(0);
	// else ans.pb(1);
	// for(int i=1; i<n; i++){
	// 	if(a[i]==0){
	// 		ans[i]=ans[i-1]+1;
	// 	}
	// 	else{
	// 		ans[i]=ans[i-1];
	// 	}
	// }
	// if(ans[0]==0){
	// 	if(ans[n-2]==ans[n-1]) cout<<ans[n-2]+2<<endl;
	// 	else cout<<ans[n-1]+1<<endl;
	// }
	// else{
	// 	if(ans[n-2]==ans[n-1]) cout<<ans[n-2]+1<<endl;
	// 	else cout<<ans[n-1]<<endl;
	// }	
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