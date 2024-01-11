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
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='Y' ||s[i]=='U' || s[i]=='O' || s[i]=='I' || s[i]=='a' || s[i]=='e' || s[i]=='y' ||s[i]=='u' || s[i]=='o' || s[i]=='i'){
            continue;
        }
        else{
            ans += '.';
            s[i] |= ' ';
            ans += (s[i]);
        }
    }
    cout<<ans<<endl;
}
love{
    Alamgir
    solve();
    return 0;    
}