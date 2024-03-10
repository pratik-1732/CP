#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k;
	cin>>n>>k;

	 int temp=k/(n-1);
	 //if(temp<n) temp=0;
	 int rem=k%(n-1);
	 int ans;
	 if(rem==0 && temp==0) ans=k;
	 else if(rem==0) ans=(temp*n)-1;
	 else ans=(temp*n)+rem;
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