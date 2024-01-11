#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n,a,b; cin>>n>>a>>b;
    ll x=1,y=1;
    bool flag=false;
    bool xx=true,yy=true;
    if(n==1){
        cout<<"Yes"<<endl;
        return;
    }
    while(true){
        if(x>n || y>n) break;
        if(xx){
            x=x*a;
            y=y+b;
            xx=false;
        }
        else{
            x=x+b;
            y=y*a;
            xx=true;
        }

        if(n==x || n==y){
            flag=true;
            break;
        }
        
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}