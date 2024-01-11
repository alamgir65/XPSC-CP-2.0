#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> v;
        int last=a[0];
        for(int i=1;i<n;i++){
            if(a[i] <= last){
                last=a[i];
            }
            else{
                v.push_back(a[i]);
            }
        }
        int cnt=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i] < v[i+1]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}