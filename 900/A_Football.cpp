#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int A=0,B=0;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string st=a[0];
    string ss;
    for(int i=0;i<n;i++){
        if(a[i]==st) A++;
        else ss=a[i];
    }
    B=n-A;
    if(A>B) cout<<st<<endl;
    else cout<<ss<<endl;
    return 0;
}