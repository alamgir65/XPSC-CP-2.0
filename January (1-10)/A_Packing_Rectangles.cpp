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
ll w,h,n;
bool isPossible(ll x){
    return ((x/w)*(x/h)) >= n;
}
void solve(){
    cin>>w>>h>>n;
    ll l=0,r=1,mid;
    while(!isPossible(r)) r*=2;
    ll ans=0;
    while(r > l+1){
        mid=(l+r)/2;
        if(isPossible(mid)){
            ans=mid;
            r=mid;
        }else{
            l=mid;
        }
    }
    out(ans)
}
love{
    Alamgir
    solve();
    return 0;    
}