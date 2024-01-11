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
    string s; cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    int mn=min(one,zero);
    //cout<<mn<<endl;
    if(mn%2==1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
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