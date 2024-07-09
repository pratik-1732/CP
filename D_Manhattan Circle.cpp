#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m;
	cin>>n>>m;
	vector<string> v;
	int top=INT_MAX,bottom=INT_MIN,right=INT_MIN,left=INT_MAX;
	// int temp=0;
	// for(int i=0; i<n; i++){
	// 	if(temp==m) m=0;

	// 	char ch; cin>>ch;
	// 	cout<<ch<<" ";
	// 	temp++;
	// 	if(ch=='#'){
	// 		cout<<"h"<<" ";
	// 		top= min(top, i);
	// 		bottom= max(bottom, i);
	// 		left= min(left, temp);
	// 		right= max(right, temp);
	// 	}
	// 	else continue;
	// }
	// top++; bottom++;
	// int x= (top+bottom)/2;
	// int y= (left+right)/2;




	for(int i=0; i<n; i++){
		string s="";
		for(int j=0; j<m; j++){
			char ch;
			cin>>ch;
			s+=ch;
		}
		
		v.pb(s);
	}
	
	
	bool change=false;
	for(int i=0; i<n; i++){
		string temp= v[i];
		for(int j=0; j<m; j++){
			if(temp[j]=='#'){
				top=i;
				change=true;
				break;
			}
		}
		if(change==true) break;
	}
	change=false;
	for(int i=n-1; i>=0; i--){
		string temp= v[i];
		for(int j=0; j<m; j++){
			if(temp[j]=='#'){
				bottom=i;
				change=true;
				break;
			}
		}
		if(change==true) break;
	}
	top++; bottom++;
	int x= (top+bottom)/2;
	string middle= v[x-1];
	for(int j=0; j<m; j++){
		if(middle[j]=='#') {
			left=j;
			break;
		}
	}
	for(int j=m; j>=0; j--){
		if(middle[j]=='#') {
			right=j;
			break;
		}
	}
	left++; right++;
	int y= (left+right)/2;


	cout<<x<<" "<<y<<endl;
	//cout<<top<<" "<<bottom<<" "<<left<<" "<<right<<endl;
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