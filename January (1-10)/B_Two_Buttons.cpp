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
    int x;
    if(n>=m) x=n-m;
    else{
        int c=0;
        int r=n;
        while((2*(r-1)) > m){
            r--;
            c++;
        }
        int ans1 = c + (2*r-m);
        int cnt=0;
        int s=n,b=m;
        while(b>s){
            s *= 2;
            cnt++;
        }
        int ans2=cnt;
        if(s>b) ans2 += s-b;
        if(n>1) x = min(ans1,ans2);
        else x=ans2;
        //x=cnt + (n-m);
    }
    cout << x << endl;
}
love{
    Alamgir
    solve();
    return 0;    
}