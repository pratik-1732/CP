#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int solve(){
	int n; cin>>n;
	int sum=0;
	if(n==0) return 0;
	vector<int> arr;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		sum+=x;
		arr.pb(x);
	}	
	sort(arr.begin(), arr.end());
	if(sum%3==0) return 0;
	else{
		int temp=sum%3;
		for(auto i: arr){
			if((sum-i)%3==0) return 1;
		}
		return (3-temp); 
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	int ans =solve();
	cout<<ans<<endl;
	}

	return 0;
}