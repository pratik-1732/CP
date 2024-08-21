#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

vector<int> prime(300, -1);
bool checkPrime(int num)
{
        for(int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
    
    return true;
}

void solve(){
	int n; cin>>n;
	vector<int> nums(n);
	for(auto &i: nums) cin>>i;

	vector<int> even;
	vector<int> odd;
	for(int i=0; i<n; i++){
		if(nums[i]%2==0) even.pb(i);
		else if(nums[i]%2!=0) odd.pb(i);
	}
	
	if(even.size()>=2){
		cout<<even[0]+1<<" "<<even[1]+1<<endl;
		return;
		for(int i=0; i<odd.size(); i++){

		}
	}
	if(odd.size()>2){
		cout<<odd[0]+1<<" "<<odd[1]+1<<endl;
		return;
	}
	int x=-1,y=-1,z=-1;
	if(even.size()!=0) x=nums[even[0]];
	if(odd.size()!=0){
		if(odd.size()==2){
			y= nums[odd[0]];
			z= nums[odd[1]];
			int temp3= y+z;
			// cout<<temp3<<" "<<prime[temp3]<<" ";
			if(x!=-1){
				int temp1= x+y, temp2= x+z;
				if(prime[temp1]==-1){
					cout<<even[0]+1<<" "<<odd[0]+1<<endl;
					return;
				}
				if(prime[temp2]==-1){
					cout<<even[0]+1<<" "<<odd[1]+1<<endl;
					return;
				}
			}
			if(prime[temp3]==-1){
				cout<<odd[0]+1<<" "<<odd[1]+1<<endl;
				return;
			}
		}
		else{
			y= nums[odd[0]];
			if(x!=-1){
				int temp1= x+y;
				if(prime[temp1]==-1){
					cout<<even[0]+1<<" "<<odd[0]+1<<endl;
					return;
				}
			}
		}
	}
	cout<<-1<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	for(int i=2; i<300; i++){
		if(checkPrime(i)) prime[i]= 1;
	}
	while(t--){
	solve();
	}

	return 0;
}