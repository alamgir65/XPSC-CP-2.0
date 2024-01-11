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
vector<ll> primeFactorization(ll n) {
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++) {
        ll cnt = 0; 
        while(n % i == 0) {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
void solve(){
    ll n,k; cin>>n>>k;
    int x;
    if(n%2==0){
        n += (2*k);
        out(n)
        return;
    }
    int p=0;
    for(int i=n;i>=2;i--){
        if(n%i==0){
            p=i;
        }
    }
    cout << (n+p+(k-1)*2) << endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}