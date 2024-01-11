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
    if(n%2==0){
        for(int i=n;i>=1;i--) cout<<i<<" ";
        cout<<endl;
    }
    else{
        cout<<(n/2 +1 )<<" ";
        for(int i=n-1;i>=1;i--){
            if(i==(n/2 +1)) cout<<n<<" ";
            else cout<<i<<" ";
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