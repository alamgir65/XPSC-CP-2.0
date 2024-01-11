#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int mn=a[0],mx=a[n-1];
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x=0,y=0;
        if(i==0){
            x=abs(a[i]-a[i+1]);
            y=abs(a[i]-mx);
        }
        else if(i==n-1){
            x=abs(a[i]-a[i-1]);
            y=abs(a[i]-mn);
        }
        else{
            x=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
            y=max(abs(a[i]-mx),abs(a[i]-mn));
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}