#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
    string s;
    char c='a';
    for(int i=1;i<=k;i++){
        s += c;
        c++;
    }
    string t=s;
    for(int i=1;i<n;i++){
        s += t;
    }
    cout << s << endl;
    }
}