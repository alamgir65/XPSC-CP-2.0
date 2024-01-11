#include<bits/stdc++.h>
using namespace std;
string a="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{   
    char c; cin>>c;
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        int j=a.find(s[i]);
        if(c=='L'){
            cout<<a[j+1];
        }
        else{
            cout<<a[j-1];
        }
    }
    return 0;
}