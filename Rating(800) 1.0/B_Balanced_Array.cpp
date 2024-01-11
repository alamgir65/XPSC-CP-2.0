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
    ll n; cin>>n;
    ll sum=(n/2)*((n/2)+1);
    ll a[n];
    if(n<=2 || (n/2)%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        ll x=2;
        for(int i=0;i<n/2;i++){
            a[i]=x;
            x+=2;
        }
        x=1;
        for(int i=n/2;i<n-1;i++){
            a[i]=x;
            sum-=x;
            x+=2;
        }
        a[n-1]=sum;
        for(int v:a){
        cout<<v<<" ";
        }
        cout<<endl;
    }
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