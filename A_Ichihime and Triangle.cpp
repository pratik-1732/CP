#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x,y,z;
	if(a!=b){
		x=b;
		if(b!=c){
			y=c;
			z=c;
		}
		else {
			y=c;
			z=c;
		}
	}
	else{
		x=a;
		y=c;
		if(b!=c) {
			if(2*a>=c) z=c;
			else{
				y=c;
				z=c;
			}
		}
		else z=a;
	}
	cout<<x<<" "<<y<<" "<<z<<endl;
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