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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vll v(n);
        for(int i = 1; i < n; i++) {
            cin >> v[i];
        }

       vll extra;
       vector<bool> vis (n + 1, 0);

       for (int i = 0; i < n - 1; i++) {
        ll num = v[i+1] - v[i];

        if(num >= 1 && num <= n && !vis[num]) {
            vis[num] = true;
        } else {
            extra.push_back(num);
        }
       }

       if(extra.empty()) {
        cout << "YES\n";
        continue;
       }
       if(extra.size() > 1) {
        cout << "NO\n";
        continue;
       }

       vii rest;
       for (int i = 1; i <= n; i++) {
        if(!vis[i]) {
            rest.push_back(i);
        }
       }

       if(rest.size() == 2 && extra[0] == rest[0] + rest[1]) {
            cout << "YES\n";
       } else {
            cout << "NO\n";
       }
    }
}
love{
    Alamgir
    solve();
    return 0;    
}