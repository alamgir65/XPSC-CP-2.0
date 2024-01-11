#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
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
    int n; cin>>n;
    int a[n];
    ll sum=0;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
        sum += a[i];
    }
    if(sum%2!=0) yes
    else{
        if(even==n || odd==n) no
        else yes
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