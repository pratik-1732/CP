#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	vector<string> str;
	//map<int,int> count;
	vector<pair<int, int>> count;
	for(int i=0; i<10; i++){
		string s;
		cin>>s;
		str.pb(s);	
	}
	int k=1;
	for(auto i: str){
		for(int j=0; j<10; j++){
			if(i[j]=='X'){
				count.pb(make_pair(k,j+1));
			}
		}
		k++;
	}
	
	int cnt=0;

	for(auto i: count){
		//cout<<i.first<<" "<<i.second<<endl;

		if(i.first==1 || i.first==10 || i.second==1 || i.second==10) cnt+=1;
		else if(i.first==2 || i.first==9 || i.second==2 || i.second==9) cnt+=2;
		else if(i.first==3 || i.first==8 || i.second==3 || i.second==8) cnt+=3;
		else if(i.first==4 || i.first==7 || i.second==4 || i.second==7) cnt+=4;
		else if(i.first==5 || i.first==6 || i.second==5 || i.second==6) cnt+=5;

	}
		cout<<cnt<<endl;
	
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