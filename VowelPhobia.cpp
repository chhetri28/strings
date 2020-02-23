#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s1,s2;
    cin>>s1;
    int cnt=0;
    for(int i=0;s1[i];i++){
        if(s1[i]=='a'||s1[i]=='i'||s1[i]=='e'||s1[i]=='o'||s1[i]=='u'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
}
