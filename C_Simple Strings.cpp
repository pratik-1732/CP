#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string s; cin>>s;
	int n= s.length();
	vector<char> alphas;
	for(char ch='a'; ch<='z'; ch++) alphas.pb(ch);
	for(int i=0; i<n; i++){
		// cout<<i<<" ";

		if(i>0) char prev= s[i-1];
		if(i+1<n && s[i]==s[i+1]){
			if(i+2<n && s[i]!=s[i+2]){
				char curr=s[i+2];
				if(i>0 && s[i-1]!=s[i+2]) s[i]= s[i+2];
				else if(i>0 && s[i-1]==s[i+2]){
					// if(curr=='z') curr--;
					// else curr++;
					for(auto k: alphas){
						if(k!=s[i] && k!=s[i+2]) {
							s[i]=k;
							break;
						}
					}
				}
				if(i==0 && s[i]==s[i+1]){
					// char tem= s[i];
					// if(curr=='z') tem--;
					// else tem++;
					// s[i]=tem;
					//if(s[i]=='z') s[i]='a';
					for(auto k: alphas){
						if(k!=s[i]) {
							s[i]=k;
							break;
						}
					}
				}
				// i+=2;
			}
			else if(i+2<n && s[i]==s[i+2]){
				// char ch=s[i];
				// if(ch=='z') ch--;
				// else ch++; 
				// s[i+1]=ch;
				// i++;

				for(auto k: alphas){
						if(k!=s[i]) {
							s[i+1]=k;
							break;
						}
					}
			}
			else{
				// char ch=s[i];
				// ch++; s[i+1]=ch;

				for(auto k: alphas){
						if(k!=s[i] && k!=s[i-1]) {
							s[i]=k;
							break;
						}
					}
			}
		}
		// else continue;
	}
	cout<<endl;
	cout<<s<<endl;
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