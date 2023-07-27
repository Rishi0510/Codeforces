#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    bool ans = true;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i] != t[s.size()-i-1])
        {
            ans = false;
            break;
        }
    }
    if(ans == false)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

    return 0;
}