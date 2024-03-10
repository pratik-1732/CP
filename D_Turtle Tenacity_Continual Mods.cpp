#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool present(vector<int> arr){
	int temp=arr[0];
	for(int i=1; i<arr.size(); i++){
		if(arr[i]%temp!=0) return true;
	}
	return false;
}
bool solve(){
	int n; cin>>n;
	vector<int> arr;

	for(int i=0; i<n; i++){
		int x; cin>>x;
		arr.pb(x);
	}	
	sort(arr.begin(), arr.end());
	if(arr[0]!=arr[1]) return true;
	else{
		if(present(arr)) return true;
		else return false;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans=solve();
	if(ans==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

	return 0;
}