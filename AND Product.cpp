#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

string binaryNo(int x){
    string s;
    while(x!=0){
        int temp=x%2;
        char ch='0'+temp;
        s+=ch;
        x/=2;
    }
    reverse(s.begin(), s.end());
    
    return s;
}
long andProduct(long a, long b) {
    // ll temp=a;
    // for(ll i=a; i<=b; i++){
    //     temp=temp&i;
    // }
    // return temp;
    string x=binaryNo(a); int l1=x.length();
    string y=binaryNo(b); int l2=y.length();
    string ans;
   
    if(l1<=l2){
        for(int i=0; i<l1; i++){
            if(x[i]==y[i]) ans+=x[i];
            else break;
        }
    }
    else{
        for(int i=0; i<l2; i++){
            if(x[i]==y[i]) ans+=x[i];
            else break;
        }
    }
    int maxi=max(l1,l2);
    maxi-=ans.length();
    while(maxi--){
        ans+='0';
    }
    //cout<<ans<<endl;

    //int temp=stoi(ans);
    int temp=0; int j=0;
    for(int i=ans.length()-1; i>=0; i--){
        int x=ans[i]-'0';
        temp+=(x*pow(2,j));
        j++;
    }
    //cout<<temp<<endl;
    return temp;
}
void solve(){
	int a,b; cin>>a>>b;
	int ans=andProduct(a,b);
	cout<<ans<<endl;
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