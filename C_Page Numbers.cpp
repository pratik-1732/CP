#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string s;
	cin>>s;
	int n=s.length();
	vector<int> nums;
	for(int i=0; i<n; i++){
		// if(s[i]>='0' && s[i]<='9'){
		// 	char ch=s[i]-'0';
		// 	int x= (int) ch;
		// 	nums.pb(x);
		// }
		string temp="";
		while(i<n && s[i]!=','){
			temp+=s[i];
			i++;
		}
		
		int x= stoi(temp);
		nums.pb(x);
	}
	set<int> unique;
	for(auto i: nums) unique.insert(i);
	
	
	auto it= unique.begin();
	auto itr= unique.begin(); itr++;
	vector<int> ans;
	
	while(itr!=unique.end()){
		string a= to_string(*it);

		if(*itr-*it==1){
			while(itr!=unique.end()){
				if(*itr-*it!=1) break;

				it++; itr++;
			}
			string b= to_string(*it);
			if(itr!=unique.end())
				cout<<a<<"-"<<b<<",";
			else {
				cout<<a<<"-"<<b<<" ";
				return;
			}

			it++; itr++;
		}
		else{
			cout<<a<<",";
			it++; itr++;
		}
	}
	//cout<<*it<<" "<<*itr<<endl;
	if(it!=unique.end()){
		string c= to_string(*it);
		cout<<c<<" ";
	}
	
	// if(ans[ans.size()-1]-ans[ans.size()-2]==1){
	// 	ans[ans.size()-2]=ans[ans.size()-1];
	// 	ans.pop_back();
	// }

	// for(auto i: ans) cout<<i<<" ";
		
	// if(ans.size()%2==0){
	// 	for(int i=0; i<ans.size(); i+=2){
	// 		string a= to_string(ans[i]);
	// 		string b= to_string(ans[i+1]);
	// 		cout<<a<<"-"<<b<<",";
	// 	}	
	// }
	// else{
	// 	for(int i=0; i<ans.size()-1; i+=2){
	// 		string a=  to_string(ans[i]);
	// 		string b=  to_string(ans[i+1]);
	// 		cout<<a<<"-"<<b<<",";
	// 	}
	// 	string c=  to_string(ans[ans.size()-1]);
	// 	cout<<c<<" ";
	// }
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