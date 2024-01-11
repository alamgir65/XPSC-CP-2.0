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
    int w,h,n;
    cin>>w>>h>>n;
    int cnt=1;
    int i=1;
    while(w>=1 && h>=1){
        if(w%2==0){
            cnt+=i;
            w/=2;
        }
        else if(h%2==0){
            cnt+=i;
            h/=2;
        }
        if(cnt>=n){
            cout<<"YES"<<endl;
            return;
        }
        if(w%2!=0 && h%2!=0) break;
        i*=2;
    }
    cout<<"NO"<<endl;
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