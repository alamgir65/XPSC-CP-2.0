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
    if(a[n-1]==1){
        no
        return;
    }
    vii ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]==0){
            if(i==0 || a[i-1]==0){
                ans.pb(0);
            }
            else if(a[i-1]==1) {
                int cnt=0;
                int j=i-1;
                int last;
                while(j>=0 && a[j]==1){
                    cnt++;
                    last=j;
                    j--;
                }
                int tmp=cnt;
                while(cnt--) ans.pb(0);
                ans.pb(tmp);
                i=last+1;
            }
        }
    }
    yes
    for(auto x:ans) cout<<x<<" ";
    cout<<'\n';
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}