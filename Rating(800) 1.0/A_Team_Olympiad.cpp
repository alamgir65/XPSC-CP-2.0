#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    int p=0,m=0,e=0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            p++;
            v1.push_back(i+1);
        }
        else if(a[i]==2){
            m++;
            v2.push_back(i+1);
        }
        else if(a[i]==3){
            e++;
            v3.push_back(i+1);
        }
    }
    int w=min(min(p,m),min(m,e));
    cout<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    return 0;
}