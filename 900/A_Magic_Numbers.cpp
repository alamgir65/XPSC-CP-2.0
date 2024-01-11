#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!='1' && s[i]!='4'){
            flag=false;
        }
    }
    if(s[0]=='4'){
        flag=false;
    }
    if(s.find("444")!=s.npos){
        flag=false;
    }
    if(flag==true) cout<<"YES";
    else cout<<"NO"<<endl;
    return 0;
}