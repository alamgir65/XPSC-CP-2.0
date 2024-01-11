#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string s;
	    for(int i=0;i<6;i++){
	        char c; cin>>c;
	        s.push_back(c);
	    }
	    if(s.find("WWW") != s.npos){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}

}
