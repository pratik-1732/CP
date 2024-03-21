#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	//int n; cin>>n;
	string s; cin>>s;
	int len=s.length();
	string str="";
	if(len<=2) str=s;
	else{
		str+=s[len-2];
		str+=s[len-1];
	}
	
	int n=stoi(str);
	//cout<<n<<endl;
	int ans=1;
	vector<int> two={1,2,4,3};
	vector<int> three={1,3,4,2};
	vector<int> four={1,4,1,4};
	int x=n%4;
	ans+=(two[x]+three[x]+four[x]);
	cout<<ans%5<<endl;
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