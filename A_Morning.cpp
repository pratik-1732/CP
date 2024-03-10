#include<bits/stdc++.h>
using namespace std;

//#define int long long
#define pb push_back

void solve(){
	string s; cin>>s;
	int cnt=0;
	//cout<<s<<endl;
		if(s[0]=='1'){
			cnt++;
			//cout<<cnt<<endl;
		}
		else if(s[0]=='0'){
			cnt+=10;
		}
		else{
			cnt+=(s[0]-48+1);
		}
	//cout<<cnt<<" ";
	for(int i=1; i<4; i++){
		int diff= abs(s[i]-s[i-1]);
		cnt+=(diff+1);
	}
	cout<<cnt<<endl;

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