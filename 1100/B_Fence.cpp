#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int idx=0;
    int mn=INT_MAX;
    int sum=0;
    int i=0,j=0;
    while(j<n){
        sum += a[j];
        if((j-i+1)==k){
            //cout<<sum<<" ";
            if(mn>sum){
                idx=i;
                mn=sum;
            }
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout<<endl;
    cout<< idx+1 <<endl;
    return 0;
}