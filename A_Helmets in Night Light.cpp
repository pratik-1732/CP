#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,p;
	cin>>n>>p;
	vector<int> a;	
	vector<int> b;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}
	for(int i=0; i<n; i++){
		int x; cin>>x;
		b.pb(x);
	}	
	vector<pair<int,int>> people;
	for(int i=0; i<n; i++){
		int x=b[i]; int y=a[i];
		people.pb(make_pair(x,y));
	}
	sort(people.begin(), people.end());
	
	int price=0; int tempPeople=0;
	tempPeople++;
	price+=p;
	for(auto i: people){
		if(tempPeople>=n) break;

		if(i.first<p){
			int k= n - tempPeople;
			tempPeople+=min(i.second, k);
			price+=min(i.second, k)*i.first;
		}	
	}
	if(tempPeople<n){
		price+=((n-tempPeople)*p);
	}
	
	cout<<price<<endl;
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