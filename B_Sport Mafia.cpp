#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n,k;
	cin>>n>>k;

	// int candy=1; int diff=abs(k-candy);
	// int x=2; int steps=n;
	// while(diff>candy && steps!=0){
	// 	steps=n;
	// 	candy+=x;
	// 	diff=abs(k-candy);
	// 	steps-=(x+diff);
	// 	x++; 
	// 	cout<<candy<<" "<<diff<<" "<<n<<" "<<x<<endl;

	// }
	// cout<<diff<<endl;

	int l=1, r=n; int mid; 
	while(l<=r){
		mid=(l+r)/2;
		int sum=(mid*(mid+1))/2-(n-mid);
		//cout<<sum<<" "<<mid<<endl;
		if(sum==k){
			cout<<n-mid<<endl;
			break;
		}
		else if(sum>k){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
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