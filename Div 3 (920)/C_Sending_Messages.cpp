#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n,f,a,b; cin>>n>>f>>a>>b;
    vll v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll last=0,remind=f;
    for(auto x:v){
        ll interval=x-last;
        ll cost= interval*a;
        ll costR=b;
        if(cost < costR){
            remind -= cost;
        }else{
            remind -= costR;
        }
        if(remind <= 0){
            no
            return;
        }
        last=x;
    }
    yes
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}