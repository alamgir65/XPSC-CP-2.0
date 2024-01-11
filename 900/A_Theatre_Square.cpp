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
    ll n,m,a; cin>>n>>m>>a;
    if(n==m && a==n){
        cout<< 1 <<endl;
        return;
    }
    ll x=(n/a);
    if(n%a!=0) x++;
    //m -= (n - n/a);
    ll y=m/a;
    if(m%a!=0) y++;
    ll ans=x*y;
    cout<< ans <<endl;
}
love{
    Alamgir
    solve();
    return 0;    
}