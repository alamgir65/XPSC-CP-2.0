#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s,t,r; cin>>s>>t>>r;
    int frq[26]={0};
    int frq2[26]={0};
    for(char c:s){
        frq[c-'A']++;
    }
    for(char c:t){
        frq[c-'A']++;
    }
    for(char c:r){
        frq2[c-'A']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(frq[i]!=frq2[i]){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}