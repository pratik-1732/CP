#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string s;
	cin>>s;
	int cnt=0, n=s.length();
	for(int i=0; i<n; i++){
		if(s[i]=='(') cnt++;
	}
	// string temp="()";
	// cout<<"()";
	// cnt--;
	// if(cnt<=0) return;
	// cout<<"(";
	// cnt--;
	// while(cnt>0){
	// 	cout<<temp;
	// 	cnt--;
	// }
	// cout<<")";
	vector<pair<int, int>> temp;
	for(int i=0; i<n; i++){
		temp.pb(make_pair(cnt, i*-1));
		if(s[i]=='(') cnt++;
         else cnt--;
		// if(s[i]=='('){
		// 	cnt++;
		// 	temp.pb(make_pair(cnt, "("));
		// }
		// else if(s[i]==')' && s[i-1]=='('){
		// 	cnt++;
		// 	temp.pb(make_pair(cnt, ")"));
		// }
		// else{
		// 	cnt--;
		// 	temp.pb(make_pair(cnt, ")"));
		// }
	}
	sort(temp.begin(), temp.end());
	for(auto i: temp){
		cout << s[i.second*-1];
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