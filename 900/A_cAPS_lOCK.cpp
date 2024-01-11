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
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<97) cnt++;
    }
    if(s[0]>=97 && cnt==s.size()-1){
        s[0]-=32;
        for(int i=1;i<s.size();i++){
            s[i]+=32;
        }
        cout<<s<<endl;
    }
    else if(cnt==s.size()){
        for(int i=0;i<s.size();i++){
            s[i]+=32;
        }
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }
}
love{
    Alamgir
    solve();
    return 0;    
}