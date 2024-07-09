#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int common(int x, int y){
	int temp= __gcd(x,y);
	return (x*y)/temp;
}
void solve(){
	int n,x,y; cin>>n>>x>>y;
	int a=n/x, b=n/y, c=(n/common(x,y));
	int ans=0;
	if(x%y==0) c=a;
	else if(y%x==0) c=b;
	
	if(c==a){
		b-=c;
		if(b%2==0) ans-=((b/2)*(b+1));
		else ans-=(b*((b+1)/2));
		cout<<ans<<endl;
		return;
	}
	//cout<<a<<" "<<b<<" "<<c<<endl;
	int temp1=0, temp2=0;
	if(n%2==0){
		temp1+=((n/2)*(n+1));
		int m=a-c;
		int l=(n-m); 
		//cout<<l<<" "<<temp1<<" ";
		if(l%2==0) temp1-=((l/2)*(l+1));
		else temp1-= ((l+1)/2)*l;
	}
	else{
		temp1+=((n)*(n+1)/2);
		int m=a-c;
		int l=(n-m);
		if(l%2==0) temp1-=((l/2)*(l+1));
		else temp1-= ((l+1)/2)*l;
	}
	//cout<<temp1<<" ";
	b-=c;
	if(b%2==0){
		temp2+=((b/2)*(b+1));
	}
	else temp2+=(b*((b+1)/2));

	ans+= (temp1-temp2);
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