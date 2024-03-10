#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s1,s2;
	cin>>s1>>s2;

	int n=s1.length();
	int arr[n];
	for(int i=0; i<n; i++){
		if(s1[i]==s2[i]) arr[i]= (int)s1[i];
		else arr[i]=2;
	}
	int cnt=0;
	for(int i=0; i<n; i++){	
		if(i+1<n && arr[i]==(arr[i+1]-1)){
			cnt++;
			break;
		}
		//cout<<arr[i]<<" ";
	}
	
	if(cnt==1) cout<<"YES"<<endl;
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