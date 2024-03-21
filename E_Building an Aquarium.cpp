#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x; 
	cin>>n>>x;
	vector<int> arr(n);
	int maxi=INT_MIN;
	for(auto &i: arr) {
		cin>>i;
		maxi=max(maxi,i);
	}

	int l=0;
	//int r=maxi;
	//int r=x;
	int r=2e9;
	int ans=0;
	while(l<=r){
		int mid=(l+r)/2;
		int temp=0;
		for(int i=0; i<n; i++){
			if(arr[i]<mid)
				temp+=(mid-arr[i]);
		}

		if(temp<=x){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}

	cout<<ans<<endl;

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