#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cont=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            cont+=1;
            if(cont==7){
                cout<<"YES\n";
                return 0;
            }
        }
        else{
            cont=1;
        }
    }
    cout<<"NO\n";
    return 0;
}