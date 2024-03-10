#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
    	int x; cin>>x;
    	a.pb(x);
    }
    a.push_back(0);
    int  open = 0;
     int closed = 0;
    for (int i = 0; i < n + 1; ++i) {
        if (a[i] < open) closed += open - a[i];
        open = a[i];
    }
    cout<<closed-1<<endl;
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