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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>l(n);
    for(int i=1;i<n;i++)
    {
        if(i==n-1 || a[i]-a[i-1] < a[i+1] - a[i])
        {
            l[i] = l[i-1] + 1;
        }
        else{
            l[i] = l[i-1] + a[i] - a[i-1];
        }
    }
    vector<int>r(n);
    for(int i=n-2;i>=0;i--)
    {
        if(i==0 || a[i+1] - a[i] < a[i]-a[i-1])
        {
            r[i] = r[i+1] + 1;
        }
        else{
            r[i] = r[i+1] + a[i+1] - a[i];
        }
    }
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(x < y)
        {
            cout<<r[x] - r[y]<<"\n";
        }
        else{
            cout<<l[x] - l[y]<<"\n";
        }
    }
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