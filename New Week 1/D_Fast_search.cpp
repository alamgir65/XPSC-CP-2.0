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
    int n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    int q;  cin>>q;
    vii ans;
    while(q--){
        int x,y; cin>>x>>y;
        int i=0,j=0;
        int l=0,r=n-1,mid;
        while(l<=r){
            mid=(l+r)/2;
            if((a[mid]>=x)){
                i=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        l=0,r=n-1,mid;
        while(l<=r){
            mid=(l+r)/2;
            if((a[mid]<=y)){
                j=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(a[i]>=x && a[j]<=y) ans.pb(j-i+1);
        else ans.pb(0);
    }
    for(auto x:ans) cout<<x<<" ";
}
love{
    Alamgir
    solve();
    return 0;    
}