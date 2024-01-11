#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    string s; cin>>s;
    int frq[26]={0};
    for(int i=0;i<n;i++){
        if(s[i]>=97) frq[s[i]-'a']++;
        else frq[s[i]-'A']++;
    }
    bool flag=1;
    for(int i=0;i<26;i++){
        if(frq[i]==0){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}