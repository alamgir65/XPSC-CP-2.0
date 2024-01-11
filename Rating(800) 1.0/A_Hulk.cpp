#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    if(n==1) cout<<"I hate it"<<endl;
    else if(n==2) cout<<"I hate that I love it"<<endl;
    else{
        cout<<"I hate ";
        if(n%2==0){
            for(int i=1;i<=(n/2 -1);i++){
                cout<<"that I love that I hate ";
            }
        }
        else{
            for(int i=1;i<=(n/2);i++){
            cout<<"that I love that I hate ";
        }
        }
        for(int i=1;i<=(n/2);i++){
           // cout<<"that I love that I hate ";
        }
        if(n%2==0) cout<<"that I love ";
        cout<<"it"<<endl;
    }
    return 0;
}