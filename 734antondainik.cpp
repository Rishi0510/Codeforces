#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0, d = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'A')
        a++;
        else
        d++;
    }
    string ans;
    // string ans = (a>d) ? "Anton" : "Danik";
    if(a>d)
    ans = "Anton";
    else if(a<d)
    ans = "Danik";
    else
    ans = "Friendship";


    cout<<ans<<endl;
    return 0;
}