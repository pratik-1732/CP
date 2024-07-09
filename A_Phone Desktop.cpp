#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int x,y;
	cin>>x>>y;
	// if(y<=2){
	// 	//cout<<x<<" "<<y<<" ";
	// 	if(x==0 && y==0) cout<<0<<endl;
	// 	else if(x<=(15-4*y)) cout<<1<<endl;
	// 	else{
	// 		x-=(15-4*y);
	// 		cout<<1+(x/15)+1<<endl;
	// 	}
	// }
	// else{
	// 	int cnt=(y/2);
	// 	if(y%2!=0) {
	// 		cnt++;
	// 		if(x<=(11+(7*(y-1)))) cout<<cnt<<endl;
	// 		else{
	// 			x-= (11+(7*(y-1)));
	// 			cout<<cnt+(x/15)+1<<endl;
	// 		}
	// 	}
	// 	else{
	// 		if(x<=(7*y)) cout<<cnt<<endl;
	// 		else{
	// 			x-= (7*y);
	// 			cout<<cnt+(x/15)+1<<endl;
	// 		}
	// 	}
	// }

	int temp= (y+1)/2;
	if(y<=1){
		if(y==0 && x==0) cout<<0<<endl;
		else if(y==0 && x>0) {
			if(x%15!=0)
				cout<<temp+(x/15)+1<<endl;
			else 
				cout<<temp+(x/15)<<endl;
		}
		else if(y==1){
			x-=11;
			if(x<=0) cout<<1<<endl;
			else if(x%15!=0)
				cout<<temp+(x/15)+1<<endl;
			else 
				cout<<temp+(x/15)<<endl;
		}
	}
	else{
		if(y%2==0){
			if(x<=(7*temp)) cout<<temp<<endl;
			else{
				x-=(7*temp);
				if(x%15!=0)
					cout<<temp+(x/15)+1<<endl;
				else 
					cout<<temp+(x/15)<<endl;
			}
		}
		else{
			if(x<=(7*(temp-1)+11)) cout<<temp<<endl;
			else{
				x-=(7*(temp-1)+11);
				if(x%15!=0)
					cout<<temp+(x/15)+1<<endl;
				else 
					cout<<temp+(x/15)<<endl;
			}
		}
	}
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