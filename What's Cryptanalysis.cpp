#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;// Take n
    int count[26]={0};// take an array of size 26
    int l=0;// take length
    for(int i=0;i<n+1;i++){// loop to take string line by line 
        string a;
        getline(cin,a);
        int j=0;
        while(j<a.length()){//loop till the end of the input string 
            a[j]=toupper(a[j]);//1.convert all the  string to upper case
            if(a[j]>=65 and a[j]<=90){
                count[a[j]-65]++;//2.counting operations technique
            }
            l++;//3.count the length of string 
            j++;//4.increment j
        }
    }
   // cout<<l;
    while(l--){
        for(int i=0;i<26;i++){
            if(count[i]==l and l!=0)
            cout<<char(i+65)<<" "<<count[i]<<endl;
        }
    }
    return 0;
}
/*
3This is a test.Count me 1 2 3 4 5.Wow!!!!  Is this question easy?
*/