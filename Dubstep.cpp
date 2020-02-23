#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int f=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
             i+=2;
            if(!f){
                cout<<" ";
            }
            continue;
        }
        else{
            f=0;
            cout<<s[i];
        }
    }
    return 0;
}