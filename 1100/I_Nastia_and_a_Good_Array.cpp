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
bool ok(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(__gcd(a[i],a[i+1]) != 1) return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    int a[n];
    int mn=imax;
    int idx;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mn>a[i]){
            mn=a[i];
            idx=i;
        }
    }
    if(ok(a,n)){
        cout<<0<<endl;
        return;
    }
    ll r=1000000007;
    int start=-1,k=-1;
    if(idx%2==0){
        start=1;
        k=n/2;
    }
    else{
        start=0;
        k=(n+1)/2;
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<< idx+1 <<" "<< start+1 <<" "<< a[idx] <<" "<<r <<endl;
        start += 2;
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