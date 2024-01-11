#include<bits/stdc++.h>
using namespace std;
bool tmp(int a,int b){
    return a<=b;
}
int main()
{   
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        auto it=lower_bound(a.begin(),a.end(),x,tmp);
        cout << it-a.begin()<<endl;
    }
    return 0;
}