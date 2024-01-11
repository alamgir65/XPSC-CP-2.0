#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    ll n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll cnt=1;
    ll mx=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1] >= a[i]){
            cnt++;
            mx=max(mx,cnt);
        }
        else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    cout<< mx <<endl;
    return 0;
}