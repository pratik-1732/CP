#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int count(vector<int> barPrices, int x){
	//int n=barPrices.size();
	//int mid=barPrices[(n/2)];
	int cnt=0;
	for(auto i: barPrices){
		if(i<=x) cnt++;
		else break;
	}
	// cout<<cnt<<" ";
	return cnt;

}
void solve(){
	int n; cin>>n;
	vector<int> barPrices;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		barPrices.pb(x);		
	}
	sort(barPrices.begin(), barPrices.end());
	int mini=barPrices[0], maxi=barPrices[n-1];
	int q; cin>>q;
	while(q>0){
		int x; cin>>x;
		if(x<mini) cout<<0<<endl;
		else if(x>=maxi) cout<<n<<endl;
		else{
			//cout<<count(barPrices, x)<<endl;
			cout<<upper_bound(barPrices.begin(), barPrices.end(), x)-barPrices.begin()<<endl;
		}
		q--;
	}
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