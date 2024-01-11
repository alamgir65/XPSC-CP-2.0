#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int slice=c*d;
    int drnk=drink/nl ;
    int salt=p/np;
    int make=min(min(drnk,salt),min(slice,salt));
    cout<<make/n<<endl;
    return 0;
}