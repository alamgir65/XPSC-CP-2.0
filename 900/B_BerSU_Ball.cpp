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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m; cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    int cnt=0;
    sort(a,a+n);
    sort(b,b+m);
    while(i<n && j<m){
        if(abs(a[i]-b[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
    }
    cout<< cnt <<endl;
}
love{
    Alamgir
    solve();
    return 0;    
}