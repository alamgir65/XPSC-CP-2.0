#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int cnt=0;
    int n; cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0) cnt++;
        
    }
    cout<<cnt<<endl;
    return 0;
}