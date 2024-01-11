#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
   int sum=0;
    int cnt=0;
    int a[n];
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) one++;
        else if(a[i]==2) two++;
        else if(a[i]==3) three++;
        else if(a[i]==4) four++;
    }
    cnt += four;
    cnt += three;
    one -= three;
    if(one<0) one=0;
    cnt += two/2;
    two%=2;
    one += (2*two);
    cnt += (one/4);
    if(one%4 != 0) cnt++;
    cout << cnt <<endl;
    return 0;
}