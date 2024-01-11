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
    int n,x; cin>>n>>x;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even++;
        else odd++;
    }
    bool flag = 0;
    	for(int i = 1; i <= odd && i <= x; i += 2) //Fix no of odd
    	{
    		int have = even, need = x - i;
    		if(need <= even)
    	        flag = 1;
    	}
    if(flag) cyes
    else cno
    	
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}