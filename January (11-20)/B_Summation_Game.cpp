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
    int n,k,x; cin>>n>>k>>x;
    vii v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    sort(all(v));
    int j=n-1;
    ll temp=0;
    int r=x;
    while(r--){
        temp += v[j];
        j--;
    }


    sum -= temp;
    ll ans = sum - temp;
    j = 0;
    ll cnt = 0;
    for (ll i = x; i < n; i++){
        sum -= v[i];
        temp += v[i];
        temp -= v[j];
        j -=- 1;
        cnt -=- 1;
        ans = max(ans ,sum - temp);
        if(cnt == k) break;
    }

    ll idx = cnt;
    if (cnt < k){
        for (ll i = idx; i < n; i++){
            temp -= v[i];
            ans = max(ans, -temp);
            cnt++;
            if(cnt == k){
                break;
            }
        }
    }
    if(k == n){
        ans = max(ans, 0 * 1LL);
        out(ans)
        return;
    } 
    out(ans)

}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}