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
    int n; cin>>n;
    ll sum1=0;
    ll sum2=0;
    int cnt=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==0){
            sum1++;
            cnt2++;
        }
        else if(x<0){
            sum2 += abs(x+1);
            cnt++;
        }
        else{
            sum1 += x-1;
        }
    }
    if(cnt%2==0 || cnt2>0){
        cout<< (sum1+sum2) <<endl;
    }
    else{
        cout<<(sum1+sum2+2) <<endl;
    }
}
love{
    Alamgir
    solve();
    return 0;    
}