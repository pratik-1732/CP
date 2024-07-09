#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	int gcd= __gcd(x,y);
	int lcm= (x/gcd)*y;
	
	int lcnt= n/lcm;
	int a= n/x, b= n/y;
		a-=lcnt; b-=lcnt;

	int sum1=0, sum2=0;
	
	if(n%2==0){
		int m= (n/2)*(n+1);
		int k= n-a;
		int n;
		if(k%2==0){
			n= (k/2)*(k+1);
		}
		else{
			n= k*((k+1)/2);
		}
		sum1+= (m-n);
	}
	else{
		int m= ((n+1)/2)*n;
		int k= n-a;
		int n;
		if(k%2==0){
			n= (k/2)*(k+1);
		}
		else{
			n= k*((k+1)/2);
		}
	
		sum1+= (m-n);
	}
	
	if(b%2==0){
		sum2+= (b/2)*(b+1);
	}
	else{
		sum2+= ((b+1)/2)*b;
	}

	cout<<sum1-sum2<<endl;
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