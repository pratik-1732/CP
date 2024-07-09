#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

string isBalanced(string s) {
	stack<char> st;
	int n= s.length();
	for(int i=0; i<n; i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}
		else{
			if(st.empty()) return "NO";
			else{
				char ch= st.top();
				if((s[i]==')' && ch=='(') || (s[i]=='}' && ch=='{') || (s[i]==']' && ch=='[')){
					st.pop();
					continue;
				}
				else return "NO";
			}
		}
	}
	if(!st.empty()) return "NO";
	else return "YES";
}
void solve(){
	string s; cin>>s;
	// cout<<isBalanced<<endl;
	string ans= isBalanced(s);
	cout<<ans<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t;
	while(t--){
	solve();
	}
	return 0;
}