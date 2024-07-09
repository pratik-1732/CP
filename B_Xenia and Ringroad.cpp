#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,m;
	cin>>n;
	cin>>m;
	int current=1;
	int moves =0;
	for(int i=0;i<m;i++){
		int goal;
		cin>>goal;
		if(goal-current>=0){
			moves+=goal-current;
			 current=goal;
		}
		else {
			moves+=goal-current+n;
			current=goal;
		}
	}
	cout<<moves;
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