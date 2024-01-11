#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int stock=0,crime=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==-1 && stock==0) crime++;
        else if(x==-1 && stock>0) stock--;
        else if(x>0) stock+=x;
    }
    cout<<crime<<endl;
    return 0;
}