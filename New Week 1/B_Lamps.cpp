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
    int n; cin>>n;
    vll a(n),b(n);
    map<ll,vll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        mp[a[i]].pb(b[i]);
    }
    for(int i=1;i<=n;i++){
        if(mp[i].empty()) continue;
        sort(mp[i].begin(),mp[i].end(),greater<ll>());
    }
    ll ans=0;
    for(auto [u,v]:mp){
        ll cnt=0;
        for(auto x:v){
            if(cnt==u) break;
            cnt++;
            ans += x;

        }
    }
    out(ans)
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}