#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    if(n>0) cout<<n<<endl;
    else{
        int last=n%10;
        int l=n/10;
        int sL=(l-(l%10))+last;
        cout << max(l,sL) <<endl;
    }
    return 0;
}