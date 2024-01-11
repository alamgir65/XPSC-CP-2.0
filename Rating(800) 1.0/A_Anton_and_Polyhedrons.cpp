#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int cnt=0;
    while(n--){
        string s; cin>>s;
        if(s=="Icosahedron") cnt+=20;
        else if(s=="Cube") cnt+=6;
        else if(s=="Tetrahedron") cnt+=4;
        else if(s=="Dodecahedron") cnt+=12;
        else if(s=="Octahedron") cnt+=8;

    }
    cout<<cnt<<endl;
    return 0;
}