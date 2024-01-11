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
void solve(){
    int n; cin>>n;
    int cnt2=0,cnt3=0;
    while(n%2==0){
        cnt2++;
        n/=2;
    }
    while(n%3==0){
        n/=3;
        cnt3++;
    }
    if(n==1 && cnt2<=cnt3){
        cout<< (2*cnt3)-cnt2 <<endl;
    }
    else{
        cout<< -1 <<endl;
    }
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