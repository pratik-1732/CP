#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string s;
	getline(cin, s);
	set<char> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=97 && s[i]<=122) st.insert(s[i]);
	}	
	cout<<st.size()<<endl;
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