#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,r; cin>>n>>r;
    int x=n;
    int cnt=1;
    while(1){
        if(n%10==0 || n%10==r) break;
        cnt++;
        n+=x;
    }
    cout<<cnt<<endl;
    return 0;
}