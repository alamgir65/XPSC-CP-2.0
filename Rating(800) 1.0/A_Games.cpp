#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int h[n],g[n];
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==g[j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}