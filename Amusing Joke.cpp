#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3,s4;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    s4=s1+s2;
    //cout<<s4;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s4==s3){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}