#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m; cin>>n>>m;
	vector<int> puzzles;
	for(int i=0; i<m; i++){
		int x; cin>>x;
		puzzles.pb(x);
	}
	sort(puzzles.begin(), puzzles.end());
	int mini=INT_MAX; int sum;
	for(int i=0; i<m; i++){
		if(i+n>m) break;
		sum=abs(puzzles[i]-puzzles[i+(n-1)]);	
		mini=min(mini,sum);
	}	
	cout<<mini<<endl;
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