#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<" "<<0<<endl;
		return ;
	}
	vector<int> v(n);
	for(auto &i : v)
	{
		cin>>i;
	}

	int l=0,r=n-1;
	int alice=1;
	int bob=1;
	int temp1=v[l],temp2=v[r];
	while(l<r){
		if(bob+alice>=n)
		{
			break;
		}
		if(l<r && temp2<temp1){
			r--; 
			temp2+=v[r];
			bob++;
		}
		else if(l<r && temp2>=temp1)
		{
			l++;
			temp1+=v[l];
			alice++;
		}
		
	}


	cout<<alice<<" "<<bob<<endl;

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