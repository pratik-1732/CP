#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> arr(n);
	int cnt=0;
	for(auto &i: arr) {
		cin>>i;
		if(i<0) cnt++;
	}	
	if(cnt==n){
		int maxi=INT_MIN;
		for(auto i: arr){
			maxi=max(maxi, i);
		}
		cout<<maxi<<endl;
		return;
	}
	else{
		int oddSum=0, evenSum=0;
		for(int i=0; i<n; i++){
			if(arr[i]>0){
				if(i%2==0) evenSum+= arr[i];
				else oddSum+= arr[i];
			}
		}
		cout<<max(oddSum, evenSum)<<endl;
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