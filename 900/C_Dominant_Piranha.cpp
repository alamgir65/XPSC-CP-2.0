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
    vii a(n+1);
    int mx=imin;
    int idx=-1;
    //map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=mx) continue;
        if(i>1 && a[i-1]!=mx) idx=i;
        if(i<n && a[i+1]!=mx) idx=i;
    }
    out(idx)
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}