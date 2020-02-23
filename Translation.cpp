#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string z;
    reverse(s.begin(),s.end());
    z=s;
    if(t==z){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}