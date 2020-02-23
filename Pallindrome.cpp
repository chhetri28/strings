#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int st=0;
        int e=s.size()-1;
        int b=0;
        while(st<e){
            if(s[st++]!=s[e--]){
                b=1;
                cout<<"NO\n"<<endl;
                break;
            }
        }
        if(!b){
            cout<<"YES\n";
        }
    }
}
