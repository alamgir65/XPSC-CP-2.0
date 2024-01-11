#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k; cin>>n>>k;
    int time=240-k;
    int cnt=0;
    int st=5;
    while(time>=st){
        cnt++;
        time-=st;
        st+=5;
    }
    cout<<min(n,cnt)<<endl;
    return 0;
}