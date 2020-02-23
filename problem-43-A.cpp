#include<bits/stdc++.h>
using namespace std;
bool sortByVal(const pair<string, int> &a, 
               const pair<string, int> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
    int n;
    cin>>n;
    vector<string>s;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        s.push_back(t);
    }
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    map<string,int>::iterator it;
    vector<pair<string,int>>vec;
    for(it=mp.begin();it!=mp.end();it++){
        vec.push_back(make_pair(it->first,it->second));
    }
    sort(vec.begin(),vec.end(),sortByVal);
    int l=vec.size();
     cout<<vec[l-1].first;
    

}