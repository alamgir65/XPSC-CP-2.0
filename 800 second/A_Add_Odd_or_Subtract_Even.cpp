#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
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
    int a,b; cin>>a>>b;
    if(a<b){
        if((b-a)%2 != 0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(a>b){
        if((a-b)%2 == 0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else cout<<0<<endl;
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