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
    int h,w,k; cin>>h>>w>>k;
    char a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<h;i++){
        int consecutive=0;
        int cnt=0,tmp=0,cntO=0;
        for(int j=0;j<w-1;j++){
            if(cnt==0 && (a[i][j]=='o' || a[i][j]=='.')) cnt++;
            if((a[i][j]=='o' && a[i][j+1]=='o') || (a[i][j]=='o' && a[i][j+1]=='.') || (a[i][j]=='.' && a[i][j+1]=='o')){
                cnt++;
                mx=max(mx,cnt);
            }else{
                mx=max(mx,cnt);
                cnt=0;
            }
            if(a[i][j]=='o' && cnt=0) tmp=1;
            if(a[i][j]=='o' && a[i][j+1]=='o'){
                tmp++;
                consecutive = max(consecutive,tmp);
            }else{
                cntO=max(tmp,cntO);
            }

            if(a[i][j]=='o') cntO++;
        }
        mx=max(mx,cnt);
    }
    for(int j=0;j<w;j++){
        int cnt=0,tmp=0;
        for(int i=0;i<h-1;i++){
            if(cnt==0 && (a[i][j]=='o' || a[i][j]=='.')) cnt++;
            if((a[i][j]=='o' && a[i][j+1]=='o') || (a[i][j]=='o' && a[i][j+1]=='.') || (a[i][j]=='.' && a[i][j+1]=='o')){
                cnt++;
                mx=max(mx,cnt);
            }else{
                mx=max(mx,cnt);
                cnt=0;
            }
            if(a[i][j]=='o' && cnt=0) tmp=1;
            if(a[i][j]=='o' && a[i][j+1]=='o'){
                cntO=max(tmp,cntO);
            }else{
                cntO=max(tmp,cntO);
            }
        }
        mx=max(mx,cnt);
    }

    if(cntO >= k){
        out(0)
    }else if()
}
love{
    Alamgir
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}