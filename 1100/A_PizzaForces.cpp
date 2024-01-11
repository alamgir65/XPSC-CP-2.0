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
    ll n; cin>>n;
    ll time=0;
    if(n<=6){
        time += 15;
    }
    else if(n%10==0){
        time += (25 * (n/10));
    }
    else if(n%8==0){
        time += (20 * (n/8));
    }
    else if(n%6==0){
        time += (15 * (n/6));
    }
    else{
        if(n>=6){
            time += (n/6)*15;
            n%=6;
        }
        if(n>4){
            time += 15;
        }
        else if(n>2){
            time += 10;
        }
        else if(n>0){
            time += 5;
        }
    }
    cout<< time <<endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}