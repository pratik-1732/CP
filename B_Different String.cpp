#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool unique(string str){
	int n= str.length();
	for(int i=0; i<n; i++){
		if(i+1<n && str[i]!=str[i+1]) return true;
	}
	return false;
}
void solve(){
	string s;
	cin>>s;
	int len= s.length();
	if(len<2){
		cout<<"NO"<<endl;
	}
	else{
		if(unique(s)){
			for(int i=1; i<len; i++){
				if(s[0]!=s[i]){
					// char ch=s[0];
					// s[0]=s[i];
					// s[i]=ch;
					swap(s[0],s[i]);
					cout<<"YES"<<endl;
					cout<<s<<endl;
					break;
				}
			}
		}
		else{
			cout<<"NO"<<endl;
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