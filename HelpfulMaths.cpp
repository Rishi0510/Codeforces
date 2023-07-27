#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>v(s.size());
    
    for(int i=0;i<s.size();i++){
        if(s[i] != '+')
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<=(s.size())/2;i=i+2)
    {
        v[i] = s[i/2];
        v[i/2] = '+';
    }

    return 0;
}