#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool isPresent(int x, int y, int c, int d){
	set<int> num1;
	set<int> num2;
	for(int i=x; i<=y; i++){
		num1.insert(i);
	}
	for(int i=y; i<=12; i++){
		num2.insert(i);
	}
	for(int i=1; i<=x; i++){
		num2.insert(i);
	}
	auto it1= num1.find(c);
	auto it2= num2.find(c);
	auto itr1= num1.find(d);
	auto itr2= num2.find(d);
	if((it1!=num1.end()&&itr2!=num2.end()) || (it2!=num2.end()&&itr1!=num1.end())) return true;
	else return false;
}
void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	 int mini1= min(a,b), maxi1= max(a,b);
	// int mini2= min(c,d), maxi2= max(c,d);
	// if((mini2>=mini1 || maxi2<=maxi1) && mini2<=maxi1) cout<<"YES"<<endl;
	// else cout<<"NO"<<endl;
	bool ans= isPresent(mini1,maxi1,c,d);
	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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