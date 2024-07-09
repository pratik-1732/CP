#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	double c; cin>>c;
	double l=1, r=1e10;
	double temp= 1e-6;
	double mid;
	while(abs(l-r)>temp){
		mid= l+(r-l)/2;
		double x= mid*mid+ (double) sqrt(mid);
		
		if(x>c) r=mid;
		else l=mid;
	}
	cout<<fixed<<setprecision(6)<<mid<<endl;
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