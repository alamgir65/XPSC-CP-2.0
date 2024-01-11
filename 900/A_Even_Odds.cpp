#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{   
    ll n,k,ans=0; cin>>n>>k;
    if(k <= ((n/2)+(n%2))){
        ans=(k*2)-1;
    }
    else{
        k = k - ((n/2)+(n%2));
        ans = k*2;
    }
    cout<< ans <<endl;
    return 0;
}