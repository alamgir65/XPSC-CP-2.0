#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    getline(cin,s);
    int cnt=0;
    set<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 && s[i]<=122){
            st.insert(s[i]);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}