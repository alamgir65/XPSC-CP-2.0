#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    int mid=sum/2;
    sort(a.begin(),a.end());
    int you=0;
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        you += a[i];
        cnt++;
        if(you > mid) break;
    }
    cout<< cnt <<endl;
    return 0;
}