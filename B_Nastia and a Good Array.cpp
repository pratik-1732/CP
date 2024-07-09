#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;

    int i,temp=1e12,x=0;
    vector<int>c(n);

    for(i=0; i<n; i++) {
        cin>>c[i];
        if(c[i]<temp) {
            temp=c[i];
            x=i;
        }
    }
    cout<<n-1<<endl;
        for(i=0; i<n; i++){
            if(i!=x) cout<<x+1<<" "<<i+1<<" "<<temp<<" "<<temp+abs(i-x)<<endl;
        }
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