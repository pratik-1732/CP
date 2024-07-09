#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	string str=s;
	sort(str.begin(), str.end());
	int cnt=0, temp=0;
	
	if(str==s) cout<<1<<endl;
	else{
		for(int i=0; i<s.length(); i++){
			// if(s[i]=='1'){
			// 	// if(i+1<s.length() && s[i+1]!='1') {
			// 	// 	//cout<<s[i]<<" "<<s[i+1]<<endl;
			// 	// 	cnt++;
			// 	// }
			// }

			if(i+1<s.length() && (s[i]=='0' && s[i+1]=='1')) temp++;

			if(i+1<s.length() && (s[i]=='1' && s[i+1]=='0')) cnt++;
			else if(i+1<s.length() && (s[i]=='0' && s[i+1]=='1')) cnt++;
		}
		// if(s.length()>3)
		// 	if(s[s.length()-1]=='1' && s[s.length()-2]=='0') cnt++;
		if(temp>0)
			cout<<cnt<<endl;
		else
			cout<<cnt+1<<endl;
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