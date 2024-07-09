#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m;
	cin>>n>>m;
	vector<int>a(n+1);
	vector<int>b(n+1);
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		cin>>b[i];
	}
	
	int sum=0;
	for(int i=m+1; i<=n; i++){
		sum+= min(a[i], b[i]);
	}
	int temp=0;
	vector<int> preSum(m+1);
	for(int i=m; i>0; i--){
		temp+=b[i];
		//preSum.pb(temp);
		preSum[i]=temp;
	}
	int mini=INT_MAX;
	
	
	if(n>1)
		mini= a[1]+preSum[2];
	else{
		cout<<min(a[1], b[1]);
		return;
	}
	for(int i=2; i<=m; i++){
		if(i+1<=n && i+1<=m)
			mini= min(mini, a[i]+preSum[i+1]);
	}
	mini= min(mini, a[m]);
	
	cout<<sum+mini<<endl;
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