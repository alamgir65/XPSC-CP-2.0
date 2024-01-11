#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m; cin>>n>>m;
    bool flag=true;
    int x=3,y=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2!=0){
                if(j==0 && i==x){
                    cout<<'#';
                    x+=4;
                }
                else if(j==m-1 && y==i){
                    cout<<'#';
                    y+=4;
                }
                else cout<<'.';
            }
            else{
                cout<<'#';
            }
        }
        //if(flag) flag=false;
        //else flag=true;
        cout<<endl;
    }
    return 0;
}