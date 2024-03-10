#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n;
	cin>>n;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}
	for(int i=0; i<n; i++){
		int x; cin>>x;
		b.pb(x);
	}
	for(int i=0; i<n; i++){
		int x; cin>>x;
		c.pb(x);
	}

	vector<int> ans;
	for(int i=0; i<n; i++){
		//int ma=INT_MIN;
		int x= max(a[i], b[i]);
		int y= max(x, c[i]);
		ans.pb(y);
	}
	sort(ans.begin(), ans.end());
	int temp=0;
	for(auto i: ans){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=n-1; i>n-4; i--){
		temp+=ans[i];
	}
	cout<<temp<<endl;

	// vector<pair<int,int>> mpa;
	// vector<pair<int,int>> mpb;
	// vector<pair<int,int>> mpc;
	// for(int i = 0; i<n; i++){
	// 	int x;
 //        cin>>x;
 //        // mpa.insert(pair<int,int>(x,i));
 //        mpa.pb(make_pair(x,i));
 //    }
 //    for(int i = 0; i<n; i++){
	// 	int x;
 //        cin>>x;
 //        // mpb.insert(pair<int,int>(x,i));
 //        mpb.pb(make_pair(x,i));
 //    }
 //    for(int i = 0; i<n; i++){
	// 	int x;
 //        cin>>x;
 //        //mpc.insert(pair<int,int>(x,i));
 //        mpc.pb(make_pair(x,i));
 //    }
 //    sort(mpa.begin(), mpa.end());
 //    sort(mpb.begin(), mpb.end());
 //    sort(mpc.begin(), mpc.end());
 //    // for(auto i: mpc){
 //    // 	cout<<i.first<<" "<<i.second<<endl;
 //    // }
 //     int ma=mpa[n-1].first; int maInd=mpa[n-1].second;
 //     int mb=mpb[n-1].first; int mbInd=mpb[n-1].second;
 //     int mc=mpc[n-1].first; int mcInd=mpc[n-1].second;

    // if(mbInd==maInd){
    // 	mb=mpb[n-2].first;  mbInd=mpb[n-2].second;
    // }
    // // if(mcInd==maInd || mcInd==maInd){
    // // 	mb=mpb[n-2].first; int mbInd=mpb[n-2].second;
    // // }
    // int k = n-2;
    // while(mcInd==mbInd || mcInd==maInd){
    // 	mc=mpc[k].first;  mcInd=mpc[k].second;
    // 	k--;
    // }
    //  cout<<ma<<" "<<mb<<" "<<mc<<endl;
    //  cout<<maInd<<" "<<mbInd<<" "<<mcInd<<endl;
    // cout<<ma+mb+mc<<endl;
    // cout<<maInd<<" "<<mbInd<<" "<<mcInd<<endl;
    // int ans=0;
    // if(maInd!=mbInd && mcInd!=mbInd && mcInd!=maInd) {
    // 	ans+=ma+mb+mc;
    // 	cout<<ans<<endl;
    // }
    // else if(maInd==mbInd && mcInd==mbInd && mcInd==maInd){
    // 	if(mpb[n-2].first!=mpc[n-2].first){
    // 		mbInd=mpb[n-2].second;
    // 		mb=mpb[n-2].first;
    // 		mcInd=mpc[n-2].second;
    // 		mc=mpc[n-2].first;
    // 	}
    // 	else if(mpb[n-2].first>mpc[n-2].first){
    // 		mbInd=mpb[n-2].second;
    // 		mb=mpb[n-2].first;
    // 		mcInd=mpc[n-3].second;
    // 		mc=mpc[n-3].first;
    // 	}
    // 	else{
    // 		mcInd=mpc[n-2].second;
    // 		mc=mpc[n-2].first;
    // 		mbInd=mpb[n-3].second;
    // 		mb=mpb[n-3].first;
    // 	}
    // 	ans=ma+mb+mc;
    // 	cout<<ans<<endl;
    // }
    // else if(maInd==mbInd && maInd!=mcInd){
    // 	if(ma>mb){
    // 		mbInd=mpb[n-2].second;
    // 		mb=mpb[n-2].first;
    // 	}
    // 	else{
    // 		maInd=mpa[n-2].second;
    // 		ma=mpa[n-2].first;
    // 	}
    // 	ans+=ma+mb+mc;
    // 	cout<<ans<<endl;
    // }
    // else if(mcInd==mbInd && maInd!=mcInd){
    // 	if(mc>mb){
    // 		mbInd=mpb[n-2].second;
    // 		mb=mpb[n-2].first;
    // 	}
    // 	else{
    // 		mcInd=mpc[n-2].second;
    // 		mc=mpc[n-2].first;
    // 	}
    // 	ans+=ma+mb+mc;
    // 	cout<<ans<<endl;
    // }
    // else if(mcInd==maInd && maInd!=mbInd){
    // 	if(mc>ma){
    // 		maInd=mpa[n-2].second;
    // 		ma=mpa[n-2].first;
    // 	}
    // 	else{
    // 		mcInd=mpc[n-2].second;
    // 		mc=mpc[n-2].first;
    // 	}
    // 	ans+=ma+mb+mc;
    // 	cout<<ans<<endl;
    // }
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