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
    int a,b,c,n; cin>>a>>b>>c>>n;
    int mx=max(max(a,b),max(b,c));
    n=n-((mx-a)+(mx-b)+(mx-c));
    
    if(n>=0 && n%3==0) cout<<"YES"<<endl;
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