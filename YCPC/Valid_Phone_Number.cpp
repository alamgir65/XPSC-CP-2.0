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
    string s; cin>>s;
    if(s.size()!=14){
        no
        return;
    }
    bool flag=false;
    if(s[0]!='+' || s[1]!='8' || s[2]!='8' || s[3]!='0' || s[4]!='1' || s[5]<'3' || s[5]>'9'){
        flag=true;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]<'0' || s[i]>'9'){
            flag=true;
        }
    }
    if(flag) no
    else yes
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}