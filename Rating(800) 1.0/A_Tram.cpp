#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        sum += b;
        sum -= a;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}