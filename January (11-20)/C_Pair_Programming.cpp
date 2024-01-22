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
#define dqii deque<int> 
#define dqll deque<ll> 
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int k,n,m; cin>>k>>n>>m;
    vii a(n);
    vii b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    vii ans;
    while(i<n || j<m){
        if(i < n && a[i]==0){
            ans.pb(0);
            i++;
            k++;
        }else if(j < m && b[j]==0){
            ans.pb(0);
            j++;
            k++;
        }
        else if(i<n && a[i] <= k){
            ans.pb(a[i]);
            i++;
        }else if(j<m && b[j] <= k){
            ans.pb(b[j]);
            j++;
        }else{
            out(-1)
            return;
        }
    }
    

    for(auto val:ans) cout<<val<<" ";
    cout<<'\n';
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}