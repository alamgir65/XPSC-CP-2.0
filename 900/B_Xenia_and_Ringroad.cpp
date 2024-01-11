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
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    ll sum=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]==a[i-1]) continue;
        else if(a[i]>=a[i-1]){
            sum += (a[i]-a[i-1]);
        }
        else{
            sum += (n-a[i-1]+a[i]);
        }
    }
    cout<< sum <<endl;
}
love{
    Alamgir
    solve();
    return 0;    
}