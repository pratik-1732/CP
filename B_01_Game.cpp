#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s; cin>>s;
	stack<char> st;
	stack<char> ans;

	if(s.length()<2) {
		cout<<"NET"<<endl;
		return;
	}

	for(int i=0; i<s.length(); i++){
		if(!st.empty()){
			char ch=s[i];
			if(st.top()==ch){
				st.push(ch);
			}
			else{
				st.pop();
				if(ans.empty()){
					ans.push('A');
				}
				else{
					if(ans.top()=='A') ans.push('B');
					else ans.push('A');
				}
			}
		}
		else {
			char ch=s[i];
			st.push(ch);
		}
	}
	if(ans.empty()) cout<<"NET"<<endl;
	else{
		if(ans.top()=='A') cout<<"DA"<<endl;
		else cout<<"NET"<<endl;
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