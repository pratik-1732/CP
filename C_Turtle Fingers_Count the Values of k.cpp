#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int power(int m, int n){
	int tem=1;
	while(n--){
		tem*=m;
	}
	return tem;
}
int vecSize(int m, int n, int l){
	int temp=pow(m,n);
	int cnt=0;
	while(temp<=l){
		temp=power(m,n);
		if(temp>l) break;
		
		if(l%temp==0){
			cnt++; n++;
		}
		else break;
	}
	return cnt;
}
void solve(){
	int a,b,l; cin>>a>>b>>l;
	
	int x=0,y=0;
	int temp=pow(a,x)*pow(b,y);
	int cnt=0;
	vector<int> aCnt;
	vector<int> bCnt;

	// while(temp<=l){
	// 	temp=power(a,x);
	// 	if(temp>l) break;
		
	// 	if(l%temp==0){
	// 		cnt++; x++;
	// 	}
	// 	else break;
	// }
	int m=vecSize(a,x,l);
	for(int i=0; i<m; i++) {
		aCnt.pb(i);
	}
	
	//cnt=0,x=0; temp=pow(a,x)*pow(b,y);
	
	// while(temp<=l){
	// 	temp=power(b,y);
	// 	cout<<temp<<" ";
	// 	if(temp>l) break;
		
	// 	if(l%temp==0){
	// 		cnt++; y++;
	// 	}
	// 	else break;
	// }
	//cout<<cnt<<endl;
	int n=vecSize(b,y,l);
	for(int i=0; i<n; i++) {
		bCnt.pb(i);
	}

	int l1=aCnt.size();
	int l2=bCnt.size();
	//cout<<l1<<" "<<l2<<endl;
	cnt=0;
	map<int,int> count;
	if(l1>=l2){
		for(int i=0; i<l1; i++){
			for(int j=0; j<l2; j++){
				temp=power(a,i)*power(b,j);
				if(temp>l) break;

				if(l%temp==0){
					count[temp]++;
				} 
			}
		}
	}
	else{
		for(int i=0; i<l2; i++){
			for(int j=0; j<l1; j++){
				temp=power(a,j)*power(b,i);
				//cout<<temp<<" ";
				if(temp>l) break;

				if(l%temp==0){
					count[temp]++;
				} 
			}
		}
	}
	cout<<count.size()<<endl;
		
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