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
    int n,m; cin>>n>>m;
    vii a(n),b(m);
    map<int,int> mp;
    map<int,int> mp2;

    for(int i=0;i<n;i++){
        cin>> a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        mp2[b[i]]++;
    }
    ll sum=0;
    ll s;
    for(auto u:mp){
        ll x=u.first;
        ll y=u.second;
        ll r;
        if(mp2.find(x) != mp2.end()) r=mp2[x];
        else r=0;
        s=(y * r);
        sum += s;
    }
    cout << sum << endl;
}
love{
    Alamgir
    solve();
    return 0;    
}