#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	 cin>>s;
	//getline(cin,s);
	//cout<<s<<endl;
	// string str;
	// for(int i=0; i<s.length(); i++){
	// 	if((s[i]=='b' || s[i]=='B') && i==0) continue;

	// 	if(s[i]!='b' && s[i]!='B') str+=s[i];
	// 	else if(s[i]=='b'){
	// 		if(str.length()==0) continue;
	// 		for(int j=str.length()-1; j>=0; j--){
	// 			if(str[j]>=97 && str[j]<=122){
	// 				str.erase(str.begin()+j);
	// 			break;
	// 			}
	// 		}
	// 	}
	// 	else if(s[i]=='B'){
	// 		if(str.length()==0) continue;
	// 		for(int j=str.length()-1; j>=0; j--){
	// 			if(str[j]>=65 && str[j]<=90){
	// 				str.erase(str.begin()+j);
	// 			break;
	// 			}
	// 		}
	// 	}
	// 	//cout<<str<<endl;
	// }
	// cout<<str<<endl;

	 vector<int> index;
	 stack<int> stA;
	 stack<int> sta;

	 for(int i=0; i<s.length(); i++){
	 	if(s[i]=='b'){
	 		if(sta.empty()) {
	 			index.pb(i);
	 			continue;
	 		}
	 		else {
	 			index.pb(sta.top());
	 			index.pb(i);
	 			sta.pop();
	 		} 
	 	}
	 	else if(s[i]=='B'){
	 		if(stA.empty()) {
	 			index.pb(i);
	 			continue;
	 		}
	 		else {
	 			index.pb(stA.top());
	 			index.pb(i);
	 			stA.pop();
	 		} 
	 	}
	 	else if(s[i]>=97 && s[i]<=122){
	 		sta.push(i);
	 	}
	 	else stA.push(i);
	 }
	 int j=0;
	 sort(index.begin(), index.end());
	 index.pb(-1);
	 string str;
	 for(int i=0; i<s.length(); i++){
	 	if(index.empty()){
	 		str=s;
	 		break;
	 	}
	 	if(i!=index[j]) str+=s[i];
	 	else j++;
	 }
	 cout<<str<<endl;
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