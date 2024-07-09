#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x;
	cin>>n>>x;
	vector<int> nums(n);
	int cnt=0;
	for(auto &i: nums){
		cin>>i;
		if(i%2==0) cnt++;
	}
	int temp= n-cnt;
	if(temp==0){
		cout<<"NO"<<endl;
		return;
	}
	x--; temp--;
	if(x==0){
		cout<<"YES"<<endl;
		return;
	}
	int t= temp/2;
	if(t==0 && cnt>=x){
		cout<<"YES"<<endl;
		return;
	}
	else if(t==0 && cnt<x){
		cout<<"NO"<<endl;
		return;
	}
	while(x-2>=0 && t>0){
		x-=2; t--;
	}
	if(cnt>= x) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
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