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
    int n; cin>>n;
    int a[n];
    vii v;
    
    int aa=0,b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2 != a[i]%2){
            if(i%2==0) aa++;
            else b++;
        }
    }
    if(aa==b) cout<<aa<<endl;
    else cout<<-1<<endl;

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