#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,k,x;
	cin>>n>>k>>x;
	vector<int> arr(n+1,0);
	//int sum=0;
	// for(auto &i: arr) {
	// 	cin>>i;
	// 	//sum+=i;
	// }
	for(int i=1; i<=n; i++) {
		int x; cin>>x;
		//arr.pb(x);
		arr[i]=x;
	}
	
	sort(arr.begin(), arr.end());
	vector<int> v(n+1,0);

	for(int i=1; i<=n; i++){
		v[i]=v[i-1]+arr[i];
	}
	int temp1, temp2;
	int ans=INT_MIN;
	for(int i=0; i<=k; i++){
		if(n-x-i>=0){
			temp1=v[n-i]-v[n-x-i];
			temp2=v[n-x-i];
		}
		else{
			temp1=v[n-i];
			temp2=0;
		}
		ans=max(ans,temp2-temp1);
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