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
    bool ok1=0,ok2=0,ok3=0,ok4=0;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]=='v' && !ok1){
                ok1=1;
                break;
            }
            else if(ok1 && a[j][i]=='i' && !ok2){
                ok2=1;
                break;
            }
            else if(ok1 && ok2 && !ok3 && a[j][i]=='k'){
                ok3=1;
                break;
            }
            else if(ok1 && ok2 && ok3 && !ok4 && a[j][i]=='a'){
                ok4=1;
                break;
            }
        }
    }
    if(ok1 && ok2 && ok3 && ok4) yes
    else no
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}