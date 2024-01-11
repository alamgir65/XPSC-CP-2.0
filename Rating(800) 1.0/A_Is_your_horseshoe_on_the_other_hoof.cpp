#include<bits/stdc++.h>
using namespace std;
int main()
{   
    set<int> st;
    int n=4;
    while(n--){
        int x; cin>>x;
        st.insert(x);
    }
    cout<<(4-st.size());
    return 0;
}