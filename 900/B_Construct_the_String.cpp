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
    int n,a,b; cin>>n>>a>>b;
    char c='a';
    int cnt=0;
    string s="";
    for(int i=0;i<n;i++){
        s+=c;
        c++;
        cnt++;
        if(cnt==b){
            c='a';
            cnt=0;
        }
        if(c>'z'){
            c='a';
        }
    }
    cout<< s <<endl;
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