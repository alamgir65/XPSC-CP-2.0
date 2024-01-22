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
    int n; cin>>n;
    vii a(n),d(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>d[i];

    set<int> curr;
    set<int> baki;
    for(int i=0;i<n;i++){
        curr.insert(i);
        baki.insert(i);
    }
    for(int i=0;i<n;i++){
        set<int> new_curr;
        set<int> rem;

        for(auto j:curr){
            auto pre_it=baki.lower_bound(j);
            int pre_idx=-1;
            if(pre_it != baki.begin()){
                pre_it--;
                pre_idx= *pre_it;
            }

            auto nxt_it=baki.lower_bound(j);
            nxt_it++;
            int nxt_idx=-1;
            if(nxt_it != baki.end()){
                nxt_idx=*nxt_it;
            }

            int pre_val=(pre_idx == -1 ? 0:a[pre_idx]);
            int nxt_val=(nxt_idx == -1 ? 0:a[nxt_idx]);

            if(pre_val+nxt_val > d[j]){
                rem.insert(j);
                if(pre_idx != -1){
                    new_curr.insert(pre_idx);
                }
                if(nxt_idx != -1){
                    new_curr.insert(nxt_idx);
                }
            }
        }
        for(auto u:rem){
            baki.erase(u);
            new_curr.erase(u);
        }
        curr=new_curr;
        cout << rem.size() << " ";
    }
    cout<<"\n";
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