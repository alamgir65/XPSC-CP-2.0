#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
const int mx=1e7+2;
bool cheak[10];
void solve(){
    memset(cheak,false,sizeof(cheak));
    int x; cin>>x;
    string a="";
    
    int h=9;
    while(x>0){
        if(h>x){
            h--;
            continue;
        }
        if(cheak[h]==false && h<9){
            a+= to_string(h);
            break;
        }
        x-=h;
        cheak[h]=true;
        a+= to_string(h);
        h--;
    }
    cout<<a<<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}