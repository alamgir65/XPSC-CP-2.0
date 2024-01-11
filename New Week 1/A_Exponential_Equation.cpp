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
ll POW(ll a,ll b){
    ll res=1;
    for(int i=0;i<b;i++){
        res *= a;
    }
    return res;
}
void solve(){
    int n; cin>>n;
    if(n%2==0){
        out2(1,n/2)
        return;
    }
    for(int i=2;i<=30;i++){
        for(int j=2;j<=30;j++){
            ll tmp=POW(i,j) * j + POW(j,i) * i;
            if(tmp > n){
                out(-1)
                return;
            }
            else if(tmp==n){
                out2(i,j)
            }
        }
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