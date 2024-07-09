#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int a,b; cin>>a>>b;
	int cnt=0; int temp=0;
	while(a!=0 && a!=1){
		cnt+=a;
		temp+=(a%b);
		a/=b;
		//cout<<cnt<<" "<<temp<<endl;
	}
	cnt+=a;
	if(temp!=0)
		temp+=a;
	
	int y=0;
	while(temp!=0 && temp!=1){
		cnt+=(temp/b);
		y+=(temp%b);
		temp/=b;
	}
	if(y!=0)
		y+=temp;
	
	cnt+=(y/b);
	cout<<cnt<<endl;
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