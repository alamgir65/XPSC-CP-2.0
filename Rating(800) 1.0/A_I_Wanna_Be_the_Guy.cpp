#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int p; cin>>p;
    bool flag=1;
    set<int> st;
    while(p--){
        int x; cin>>x;
        st.insert(x);
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        st.insert(x);
    }
    
    if(st.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}