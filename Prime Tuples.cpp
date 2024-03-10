#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool prime[1000001];
void solve(){
	int n; cin>>n;

	for(int i=0; i<=1e6; i++){
		prime[i]=1;
	}
	prime[0]=0; prime[1]=0;
	for(int i=2; i*i<=1e6; i++){
		if(prime[i]){
			for(int j=i*i; j<=1e6; j+=i){
				prime[j]=0;
			}
		}
	}
	vector<int> primeNo;
	for(int i=0; i<=1e6; i++){
		if(prime[i]==1) primeNo.pb(i);
	}
	int len =primeNo.size();
	int cnt=0;

	for(int i=0; i<len; i++){
		if(i+1>=len || i+2>=len) break;

		if(primeNo[i]>n || primeNo[i+1]>n || primeNo[i+2]>n) break;

		int x=primeNo[i] + primeNo[i+1];
		int y= primeNo[i+2];
		if(x==y) cnt++;
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