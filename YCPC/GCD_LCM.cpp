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
ll gcd(ll a,ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
 
ll lcm(ll a,ll b) {
    return (a / gcd(a,b)) * b;
}
void solve(){
    int n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll x=lcm(a[i],a[j]);
            ll y=gcd(a[i],a[j]);
            sum += (x/y);
        }
    }
    
    cout<< sum <<endl;
}
love{
    Alamgir
    solve();
    return 0;    
}