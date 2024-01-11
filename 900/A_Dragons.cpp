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
    int s,n; cin>>s>>n;
    vector<pii> v;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    sort(all(v));
    bool flag=true;
    for(int i=0;i<n;i++){
        int x=v[i].first;
        int y=v[i].second;
        if(s>x){
            s += y;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag) yes
    else no
}
love{
    Alamgir
    solve();
    return 0;    
}