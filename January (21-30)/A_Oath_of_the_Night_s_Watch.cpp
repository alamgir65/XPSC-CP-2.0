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
    if(n<=2){
        out(0)
        return;
    }
    int cnt=2;
    // set<int> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // st.insert(a[i]);
    }
    sort(all(a));
    int x=a[0],y=a[n-1];
    for(int i=1;i<n-1;i++){
        if(a[i]==x || a[i]==y) cnt++;
    }
    out(a.size()-cnt)
}
love{
    Alamgir
    int t=1;
    //  cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}