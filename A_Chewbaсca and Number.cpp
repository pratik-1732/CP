#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t solve(){
	int n; cin>>n;
	int pow=1;
	int sum=0;
	while(n>0){
    	int l=n%10;
    	n=n/10;
    	if(9-l<l){
        	if(n==0 && l==9){
	            sum=l*pow+sum;
	        }
        	else{
        	sum=(9-l)*pow+sum;
        	pow*=10;
        	}
    	}
    	else{
        	sum=(l)*pow+sum;
        	pow*=10;
    	}
	}
	return sum;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;

	while(t--){
		int ans=solve();
		cout<<ans<<endl;
	}

	return 0;
}

