#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    int cnt=0;
    char cur='a';
    for(int i=0;i<s.size();i++){
        cnt += min(abs(s[i]-cur),(26-(abs(s[i]-cur))));
        cur=s[i];
    }
    cout<< cnt << endl;
    return 0;
}