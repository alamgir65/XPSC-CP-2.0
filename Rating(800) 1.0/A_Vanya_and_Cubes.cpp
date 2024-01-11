#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int cnt=0;
    int i=1;
    int sum=1;
    while(n>0){
        if(sum>n) break;
        cnt++;
        n-=sum;
        i++;
        sum+=i;
    }
    cout<<cnt<<endl;
    return 0;
}