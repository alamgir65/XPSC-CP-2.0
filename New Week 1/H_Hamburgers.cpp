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
 

bool possible(){
    
}
void solve(){
    ll Nb,Ns,Nc; 
    ll Pb,Ps,Pc;
    ll tk;
    ll B,S,C;
    string s; cin>>s;
    cin>>Nb>>Ns>>Nc;
    cin>>Pb>>Ps>>Pc;
    cin>>tk;
    B=0,S=0,C=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') B++;
        else if(s[i]=='S') S++;
        else C++;
    }
    ll l=0,r=1e15,mid;
    ll ans=0;
    while(l<=r){
        mid=(l+r)/2;
        ll needB=max((ll)0,mid*B-Nb);
        ll needS=max((ll)0,mid*S-Ns);
        ll needC=max((ll)0,mid*C-Nc);
        ll x= needB*Pb + needS*Ps + needC*Pc;
        if(tk >= x){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    out(ans)
    
}
love{
    Alamgir
    solve();
    return 0;    
}