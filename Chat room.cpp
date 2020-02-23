#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,b="hello";
    cin>>s;
    int j=0,p=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==b[j]){
            j++;
            p++;
            if(p==5){
                break;
            }
        }
    }
    if(p==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}