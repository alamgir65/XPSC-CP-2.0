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
int cnt[100001];
int k;
int num=0;
void add(int x){
    cnt[x]++;
    if(cnt[x]==1) num++;
}
void remove(int x){
    cnt[x]--;
    if(cnt[x]==0) num--;
}
bool good(){
    return num <= k;
}
void solve(){
    int n; cin>>n>>k;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll cnt=0;
    int i=0,j=0;
    //set<int> st;
    while(j<n){
        add(a[j]);
        while(!good()){
            remove(a[i]);
            i++;
        }
        cnt += j-i+1;
        j++;
    }
    out(cnt)
}
love{
    Alamgir
    solve();
    return 0;    
}