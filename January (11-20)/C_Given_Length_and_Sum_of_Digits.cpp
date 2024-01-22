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
    int m,s; cin>>m>>s;
    if(s < m){
        out2(-1,-1)
        return;
    }
    vii v;
    // vector<bool> visited(10,false);
    int x=9;
    while(s>0 && m>0){
        if(s<10){
            v.pb(s);
            break;
        }
        if(s==m){
            v.pb(1);
            s--;
            m--;
            continue;
        }else{
            if(x < (s-m)){
                v.pb(x);
                s -= x;
                m--;
            }else{
                v.pb(s-m);
                s -= (s-m);
                m--;
            }
        }
    }
    sort(all(v));
    for(auto val:v) cout<<val;
    cout<<' ';
    reverse(all(v));
    for(auto val:v) cout<<val;
}
love{
    Alamgir
    solve();
    return 0;    
}