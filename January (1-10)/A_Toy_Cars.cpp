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
    
}
love{
    int n; cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    vector<bool> visited(n+1);
    // memset(false,visited,sizeof(visited));
    for(int i=1;i<=n;i++){
        visited[i]==true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                visited[i]=false;
            }
            else if(a[i][j]=2){
                visited[j]=false;
            }
            else if(a[i][j]==3){
                visited[i]=false;
                visited[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(visited[i]==true) ans.push_back(i);
    }
    cout << ans.size() <<endl;
    for(auto x:ans){
        cout<< x<< " ";
    }
    return 0;    
}