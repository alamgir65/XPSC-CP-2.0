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
    int n,m; cin>>n>>m;
    deque<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    //ll sum=0;
    vii ans;
    while (ans.size() < n)
    {
        if (abs(b.back() - a.back()) > abs(b.front() - a.front()))
        {
            ans.push_back(abs(b.back() - a.back()));
            b.pop_back();
            a.pop_back();
        }
        else
        {
            ans.push_back(abs(a.front() - b.front()));
            a.pop_front();
            b.pop_front();
        }
    }
    ll sum = accumulate(ans.begin(),ans.end(), 0ll);
    cout << sum << endl;

}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}