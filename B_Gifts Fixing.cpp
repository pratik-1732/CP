#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; 
	cin>>n; 
	vector<int> candy;
	vector<int> orange;
	int min1=INT_MAX, min2=INT_MAX;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		candy.pb(x);
		if(x<min1) min1=x;
	}
	for(int i=0; i<n; i++){
		int x; cin>>x;
		orange.pb(x);
		if(x<min2) min2=x;
	}
	for(int i=0; i<n; i++){
		candy[i]-=min1;
		orange[i]-=min2;
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		int x=min(candy[i], orange[i]);
		int y=abs(candy[i]-orange[i]);
		cnt+=(x+y);
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