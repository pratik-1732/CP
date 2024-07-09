#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

int factorial(int a){
	if(a==1) return 1;

	return a*factorial(a-1);
}
void solve(){
	int n,m;
	cin>>n>>m;
	int x=n/m;
	int mini,maxi,y;

	int temp= n-(m-1);
	if(temp-2>0){
		y= factorial(temp)/ factorial(temp-2);
		y/=2;	
	}
	else {
		if(temp>1) y=1;
		else y=0;
	}
	
	int i;
	if(x-2>0){
		i= factorial(x)/factorial(x-2);
		i/=2;	
	}
	else {
		if(x>1) i=1;
		else i=0;
	}

	if(x*x==n){
		maxi=y;
		mini=i*m;		
	}
	else{
		maxi=y;
		mini=i*(m-1);
		int a= n-(x*(m-1));
		if(a-2>0){
			int b= factorial(a)/ factorial(a-2);
			b/=2;
			mini+=b;
		}
		else{
			if(a>1) mini++;
		}
	}
	cout<<mini<<endl;
	cout<<maxi<<endl;
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