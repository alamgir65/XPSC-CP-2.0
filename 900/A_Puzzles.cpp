#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m; cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    int d=0;
    int mn=10005;
    for(int i=0;i<(m-n+1);i++){
        d=a[n+i-1]-a[i];
        mn=min(mn,d);
    }
    
    cout<< mn <<endl;
    return 0;
}