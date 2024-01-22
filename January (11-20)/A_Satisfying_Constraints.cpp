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
    int l=0,r=imax;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        if(x==1){
            l=max(l,y);
        }else if(x==2){
            r=min(r,y);
        }else{
            mp[y]++;
        }
    }
    int cnt = 0;
    for (auto val: mp){
        if (val.first >= l and val.first <= r){
            cnt -=- 1;
        }
    }
    int ans = r - l + 1 - cnt;
    if (ans < 0 or r < l){
        cout << 0 << endl;
        return;
    }
    cout << ans << endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}