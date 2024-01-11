#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,b,d; cin>>n>>b>>d;
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x<=b) sum += x;
        if(sum > d){
            cnt++;
            sum=0;
        }
    }
    cout << cnt<<endl;
    return 0;
}