#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m; cin>>n>>m;
	string a,b;
	cin>>a>>b;
	int cnt=0;
	int i=0;
	for(int j=0; j<m; j++){
		if(i>=n) break;

		if(a[i]==b[j]){
			cnt++;
			i++;
		}
	}
	cout<<cnt<<endl;
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