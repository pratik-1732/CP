#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;

	int mid=s.length()/2;
	int p=INT_MIN, q=INT_MIN;
	while(mid>0){
		string x,y;
		for(int i=0; i<s.length(); i++){
			if(i<mid) x+=s[i];
			else {
				y+=s[i];
				
			}
		}

		if(y[0]!='0'){
			int n=stoi(x);
			int m=stoi(y);
			if(m>n && y[0]!=0){
				p=n; q=m;
				break;
			}
		}
		mid--;
	}

	if(p!=INT_MIN && q!=INT_MIN) cout<<p<<" "<<q<<endl;
	else cout<<-1<<endl;
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