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
void solve(){
    int n; cin>>n;
    string s,t; cin>>s>>t;
    int oneS=0,zeroS=0;
    int oneT=0,zeroT=0;
    bool flag=true;
    int cnt=0;
    int one=0;
    for(int i=0;i<n;i++){
        if(s[i]==t[i]) continue;
        flag=false;
        cnt++;
        if(s[i]=='1') one++;
        if(t[i]=='1') oneT++;
    }
    if(flag){
        out(0)
        return;
    }
    if(oneT >= one){
        out(cnt-one)
    }else{
        out(one)
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