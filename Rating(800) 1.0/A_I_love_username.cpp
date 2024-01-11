#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n; 
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    int mx=a[0],mn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>mx || a[i]<mn){
            cnt++;
        }
        if(a[i]>mx){
            mx=a[i];
        }
        if(a[i]<mn){
            mn=a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}