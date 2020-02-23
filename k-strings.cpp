#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,cnt=0;
    cin>>k;
    string s;
    cin>>s; 
    int l=s.length();//taking the length of string
    sort(s.begin(),s.end());//sort it
    char ch;
    for(int i=0;i<s.length();i++){
        if(i%k==0 ){//
            ch=s[i];
            //cout<<i<<" "<<ch;
        }
       // cout<<endl;
        if(s[i]==ch){
            cnt++;
        }
    }
   // cout<<cnt;
    if(l==cnt and cnt%k==0){
        for(int i=0;i<k;i++){
            for(int j=0;j<l;j+=k){
                cout<<s[j];
            }
        }
    }else{
        cout<<"-1";
    }
    return 0;
}