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
    int n,q; cin>>n>>q;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    while(q--){
        int l,r,k; cin>>l>>r>>k;
        l--;
        r--;
        ll minus;
        if(l==0) minus=pre[r];
        else{
            minus=pre[r]-pre[l-1];
        }
        ll add=(r-l+1)*k;
        ll total=pre[n-1]-minus+add;
        (total%2==0)? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}