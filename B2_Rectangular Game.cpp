#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int factors(int n){
	if(n==1) return 1;
	vector<int> ans;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			ans.pb(i);
			ans.pb(n/i);
		}
	}
	ans.pb(1);
	sort(ans.begin(), ans.end());
	int temp=ans[ans.size()-1];
	//cout<<temp<<" ";
	return temp;
}
void solve(){
	int n; cin>>n;
	vector<int> temp;
	//temp=factors(n);
	 int cnt=0; int maxi=INT_MIN;
	// for(auto i: temp){
	// 	int t=i; cnt=n;
	// 	while(t>1){
	// 		cnt+=t;
	// 	}
	// }
	int t=factors(n);
	cnt+=n;
	while(t>1){
		//cout<<t<<" "<<maxi<<endl;
		if(t==n) break;
		cnt+=t;
		t=factors(t);
	}
	cnt++;
	// maxi=max(maxi,n+1);
	cout<<cnt<<endl;
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