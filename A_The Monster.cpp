#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	int gcd=__gcd(a,c);
	int lcm=(a*c)/gcd;
	if(b==d){
		cout<<b<<endl; 
		return;
	}
	// if(c>a) {
	// 	swap(c,a);
	// 	//swap(d,b);
	// }
	for(int j=0; j<=101; j++){
		// int x=abs(d-b)%a;
		// int y=(j*c)%a;
		// if((x+y)%a==0){
		// 	//cout<<j<<endl;
		// 	cout<<d+j*c<<endl;
		// 	return;
		// }
		for(int i=0; i<=101; i++){
			if(b+i*a == d+j*c){
				cout<<b+i*a<<endl;
				return;
			}
		}
	}
	cout<<-1<<endl;
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