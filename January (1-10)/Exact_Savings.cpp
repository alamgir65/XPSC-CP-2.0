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
bool subset(vector<int> a,int n,int s){
    if(n==0){
        if(s==0) return true;
        else return false;
    }
    if(a[n-1]<=s){
        bool op1=subset(a,n-1,s-a[n-1]);
        bool op2=subset(a,n-1,s);
        return op1 || op2;
    }
    else{
        return subset(a,n-1,s);
    }
}
void solve(){
    int n,x,z; cin>>n>>x>>z;
    vii a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    int pre[n];
    sort(all(a));
    pre[0]=a[0];
    mp[pre[0]]++;
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
        mp[pre[i]]++;
    }
    ll sum=0;
    int cnt=0;
    while(sum < z){
        sum += x;
        cnt++;
    }
    if(sum - z ==0 ){
        cout<<cnt<<endl;
    }
    else{
        if(subset(a,n,(sum-z))){
            cout<<cnt<<endl;
        }
        else{
            cout<< -1 <<endl;
        }
    }
    
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}