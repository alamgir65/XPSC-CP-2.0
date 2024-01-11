#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    string s; cin>>s;
    int mx=0;
    map<string,int> mp;
    for(int i=0;i<n-1;i++){
        string a="";
        a+=s[i];
        a+=s[i+1];
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    for(auto u:mp){
        if(u.second == mx){
            cout<<u.first<<endl;
            break;
        }
    }

    return 0;
}