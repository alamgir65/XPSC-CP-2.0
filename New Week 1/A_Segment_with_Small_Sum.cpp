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
    ll n,s; cin>>n>>s;
    vll a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    int i=0,j=0;
    ll sum=0;
    int mx=0;
    while(j<n){
        sum += a[j];
        if(sum <= s){
            int len=j-i+1;
            mx=max(mx,len);
        }
        while(sum > s){
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout << mx << endl;
}
love{
    Alamgir
    solve();
    return 0;    
}