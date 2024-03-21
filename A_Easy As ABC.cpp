#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	string a,b,c;
	cin>>a>>b>>c;
	vector<string> temp;
	for(int i=0; i<3; i++){
		string s="";
		s+=a[i];
		for(int j=0; j<3; j++){
			if(abs(j-i)<2){
				s+=b[j];
				for(int k=0; k<3; k++){
					if(abs(k-j)<2){
						s+=c[k];
						temp.pb(s);
						s.pop_back();
					}
				}
				s.pop_back();
			}
		}
	}
	temp.pb(a);
	temp.pb(b);
	temp.pb(c);
	sort(temp.begin(), temp.end());
	// for(auto i: temp){
	// 	cout<<i<<" ";
	// }
	cout<<temp[0]<<endl;

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