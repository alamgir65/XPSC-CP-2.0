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
    ll sum=0;
    for(int i=1;i<=n;i++) sum += i;
    if(sum % 2 != 0){
        no
        return;
    }
    yes
    ll sum2=sum/2;
    ll x=0;
    vii a,b;
    for(int i=n;i>=1;i--){
        if(x+i <= sum2){
            x+=i;
            a.pb(i);
        }
        else{
            b.pb(i);
        }
    }
    cout<<a.size()<<endl;
    for(auto val:a) cout<<val<<" ";
    cout<<'\n';
    out(b.size())
    for(auto val:b) cout<<val<<" ";
    cout<<'\n';
}
love{
    Alamgir
    solve();
    return 0;    
}