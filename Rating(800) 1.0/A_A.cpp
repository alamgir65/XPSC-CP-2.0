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
    int cnt=0;
    cnt += ((n%10 -1 )*10);
    int x=0;
    while(n>0){
        x++;
        n/=10;
    }
    if(x==4) cnt+=10;
    else if(x==3) cnt+=6;
    else if(x==2) cnt+=3;
    else if(x==1) cnt++;
    cout<<cnt<<endl;
    
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