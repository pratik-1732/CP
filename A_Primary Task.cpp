// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// #define pb push_back

// void solve(){
// 	int n; cin>>n;
// 	string s;
// 	s= to_string(n);
// 	// while(n>0){
// 	// 	int temp= n%10;
// 	// 	char ch= char(temp);
// 	// 	s+= ch;
// 	// 	n/=10;
// 	// }
// 	// reverse(s.begin(), s.end());
// 	// cout<<s<<endl;
// 	if(s.length()<=3){
// 		if(s[2]=='1' || s[2]=='0'){
// 			cout<<"NO"<<endl;
// 		return;
// 		}
// 		else{
// 			cout<<"YES"<<endl;
// 			return;
// 		}
// 	}
// 	else if(s[0]=='1' && s[1]=='0'){
// 		// int cnt=0;
// 		int ind=-1;
// 		if(s[2]=='0'){
// 			for(int i=3; i<s.length(); i++){
// 				if(s[i]!='0') {
// 					// cnt++;
// 					ind=i;
// 					break;
// 				}
// 			}
// 			// cout<<ind<<" ";
// 			if(ind==s.length()-1 || ind==-1){
// 				cout<<"NO"<<endl;
// 				return;
// 			}
// 			else {
// 				cout<<"YES"<<endl;
// 				return;
// 			}
// 		}
// 		else {
// 			cout<<"YES"<<endl;
// 				return;
// 		}
		
// 	}
// 	else{
// 		cout<<"NO"<<endl;
// 			return;
// 	}
// }

// int32_t main(){
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
// 	int t;
// 	cin>>t;

// 	while(t--){
// 	solve();
// 	}

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if((a<=10999 && a>=10100) || (a>=1010 && a<=1099) || (102<=a && 109>=a))
            cout << "YES"<<endl;
        else
            cout << "NO"<< endl;
    }
}