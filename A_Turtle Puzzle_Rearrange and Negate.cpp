#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> elements;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		elements.pb(x);
	}	
	sort(elements.begin(), elements.end());
	int sum=0;
	for(auto i: elements){
		if(i<0) i=abs(0+i);
		sum+=i;
	}
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