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
    string s; cin>>s;
    int n=s.size();
    if(n%2==1) cout<<"NO"<<endl;
    else{
        int j=(n/2);
        for(int i=0;i<(n/2);i++){
            if(s[i]!=s[j]){
                cout<<"NO"<<endl;
                return;
            }
            j++;
        }
        cout<<"YES"<<endl;
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