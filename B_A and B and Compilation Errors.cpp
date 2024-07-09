#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 

void solve(){
	int n; cin>>n;
	vector<int> num1(n);	
	vector<int> num2(n-1);	
	vector<int> num3(n-2);
	for(auto &i: num1) cin>>i;	
	for(auto &i: num2) cin>>i;	
	for(auto &i: num3) cin>>i;
	sort(num1.begin(), num1.end());	
	sort(num2.begin(), num2.end());	
	sort(num3.begin(), num3.end());

	int l1=num1.size();
	int l2=num2.size();
	int l3=num3.size();

	int l=0, r=0;
	int x=0, y=0;
	while(r<l2){
		if(num1[l]!=num2[r]){
			x=num1[l];
			//cout<<x<<endl;
			break;
		}
		else{
			l++; r++;
		}
	}
	if(x==0) x=num1[l1-1];
	cout<<x<<endl;

	l=0, r=0;
	while(r<l3){
		if(num2[l]!=num3[r]){
			y=num2[l];
			break;
		}
		else{
			l++; r++;
		}
	}	
	if(y==0) y=num2[l];
	
	cout<<y<<endl;
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