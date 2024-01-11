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
    int n,m,h; cin>>n>>m>>h;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x; cin>>x;
            v[i].pb(x);
        }
    }
    int cnt=0;
    sort(all(v[0]));
    ll sum=0;
    ll last=0;
    for(int i=0;i<m;i++){
        last += v[0][i];
        if(last <= h){
            cnt++;
            sum += last;
        }
    }
    int ans=1;
    for(int i=1;i<n;i++){
        sort(all(v[i]));
        int tmpCnt=0;
        ll tmpSum=0;
        ll tmpLast=0;
        for(int j=0;j<m;j++){
            tmpLast += v[i][j];
            if((tmpLast) <= h){
                tmpCnt++;
                tmpSum += tmpLast;
            }
        }
        if(tmpCnt > cnt){
            ans++;
        }
        else if(tmpCnt==cnt && tmpSum < sum){
            ans++;
        }
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