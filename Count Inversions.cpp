#include <bits/stdc++.h> 
using namespace std;

#define int long long
#define pb push_back 

long long getInversions(long long *arr, int n){
    // Write your code here.
    vector<int> temp;
    temp.push_back(arr[0]);
    int k=0;
    int cnt=0;
    for(int i=1; i<n; i++){
        if(arr[i]>temp[k]) temp.push_back(arr[i]);
        else{
            for(auto j: temp){
                if(arr[i]>j) cnt++;
            }
            temp.push_back(arr[i]);
            sort(temp.begin(), temp.end());
        }
    }
    return cnt;
}
int32_t main(){
    int n; cin>>n; 
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<getInversions(arr, n)<<endl;
    return 0;
}