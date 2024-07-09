#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n; 
	string s; cin>>s;
	stack<char> st;
	for(int i=0; i<s.length(); i++){
		char ch= s[i];
		if(st.empty()){
			st.push(ch);
		}
		else{
			if(st.top()=='('){
				if(ch==')') st.pop();
				else st.push(ch);
			}
			else st.push(ch);
		}
	}	
	int len= st.size();
	cout<<len/2<<endl;
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