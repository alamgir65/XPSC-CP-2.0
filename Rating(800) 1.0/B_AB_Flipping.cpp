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
    string s; cin>>s;
    int A=-1,B=-1;
    bool a=true,b=true;
    for(int i=0;i<n;i++){
        if(s[i]=='A' && a==true){
            A=i;
            a=false;
        }
        else if(s[i]=='B' && a==false){
            B=i;
            b=false;
        }
    }
    if(a==false && b==false){
        cout<<(B-A)<<endl;
    }
    else cout<<0<<endl;
    
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