#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=1,mx=1;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            cnt++;
            mx=max(cnt,mx);
        }
        else{
            mx=max(cnt,mx);
            cnt=1;
        }
    }
    cout<<mx<<endl;
    return 0;
}