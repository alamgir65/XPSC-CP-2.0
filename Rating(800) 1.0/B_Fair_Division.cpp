#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n];
    int one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) one++;
        else two++;
    }
    //if(one==n && one%2==0 || two==n && two%2==0) cout<<"YES"<<endl;
    if(two%2==0 && one%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}