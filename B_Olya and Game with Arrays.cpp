#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=0; i<n; i++){
		int m; cin>>m;
		vector<int> temp;
		for(int j=0; j<m; j++){
			int x; cin>>x;
			temp.pb(x);
		}
		sort(temp.begin(), temp.end());
		arr1.pb(temp[0]);
		arr2.pb(temp[1]);
	}
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	int sum=0; 
	for(auto i: arr2){
		sum+=i;
	}
	sum+=arr1[0];
	sum-=arr2[0];

	cout<<sum<<endl;
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