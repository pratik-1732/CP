#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

bool is_prime(int a){
	if(a==1) return false;
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0) return false;
	}
	return true;
}
int factors(int a, int n){
	int cnt=0;
	int temp=sqrt(a);
	//if(temp*temp==a && temp<=n) return 1;
	for(int i=1; i<=sqrt(a); i++){
		if(a%i==0) {
			if(i*i==a && i<=n) cnt++;
			else if(i<=n && a/i<=n) cnt+=2;
		}
	}
	return cnt;
}
void solve(){
	int n,x; cin>>n>>x;
	if(n==1 && x==1)cout<<1<<endl;
	else if(n==1 && x>1)cout<<0<<endl;
	else if(x==1)cout<<1<<endl;
	else if(is_prime(x)){
		if(n<x) cout<<0<<endl;
		else cout<<2<<endl;
	}
	else{
		int ans=factors(x,n);
		cout<<ans<<endl;
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