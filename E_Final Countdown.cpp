#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

string changed(string s, string ans){
	reverse(s.begin(), s.end());
	reverse(ans.begin(), ans.end());
	
	cout<<s<<" "<<ans<<endl;
	int x=0, j;
	string temp="";
	for(int i=0; i<s.length(); i++){
		int y= (s[i]-'0')+(ans[i]-'0')+x;

		temp+=(y%10)+'0';
		x=(y/10);
		j=i;
	}
	j++;
	
	for(j; j<ans.length(); j++){
		int y= ans[j]+x;
		temp+=(y%10)+'0';
		x=(y/10);
	}
	reverse(temp.begin(), temp.end());
	cout<<temp<<endl;
	return temp;
}

void solve(){
	int n; cin>>n;
	string s; cin>>s;

	int presum=0;
	for(auto i: s){
		presum+=(i-'0');
	}
	//cout<<presum<<endl;

	int carry=presum/10;
	string ans="";
	ans+=(presum%10)+'0';
	//cout<<carry<<" "<<ans<<endl;
	
	for(int i=n-1; i>=0; i--) {
		presum-=(s[i]-'0');
		//cout<<presum<<" "<<carry<<endl;
		if(presum<=0){
			if(carry>0){
				ans+=(carry+'0');
				break;	
			}
			else break;
		}
		int x= presum+carry;
	
		ans+=(x%10)+'0';
		carry=(x/10);
	}
	reverse(ans.begin(), ans.end());
	cout<<ans<<endl;
	//cout<<s<<endl;
	// string ans=s;
	// s.pop_back();
	// while(s.length()>0){
	// 	ans= changed(s, ans);
	// 	s.pop_back();
	// }
	
	// cout<<ans<<endl;
	
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