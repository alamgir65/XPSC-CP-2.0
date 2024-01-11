#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x=0,y=n-1;
    int mn=a[n-1],mx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
            x=i;
        }
        if(a[i]<mn){
            mn=a[i];
            y=i;
        }
    }
    int seconds = x + (n-1-y);
    if(y<x){
        seconds--;
    }
    cout<<seconds<<endl;
    return 0;
}