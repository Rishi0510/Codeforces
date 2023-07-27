#include<bits/stdc++.h>
using namespace std;

void solve2()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sz = s.size();
    
    //sum
    int sum = 0;
    for(int i=0;i<sz;i++)
    {
        if(s[i] == 'L')
        sum = sum + sz - (sz - i);
        else
        sum = sum + sz-i;
    }
    
    
    int distinct = 0, cnt = 0;
    vector<int>dis;
    for(int i=0;i<sz;i++)
    {
        if(i<sz/2)
        {
            if(s[i] == 'L')
            {
                cnt++;
                dis.push_back(i);
            }
        }
        else
        {
            if(s[i] == 'R')
            {
                cnt++;
                dis.push_back(i);
            }
        }
    }

    sort(dis.begin(),dis.end());

    for(int i=0;i<dis.size();i++)
    {
        int left = sz-(sz-i);
        int right = sz - i;
        int cursum = sum + max(left,right) - min(left,right);
        cout<<cursum<<endl;
    }

    if(n>dis.size())
    {
        while(n-dis.size() > 0)
        {
            cout<<dis[dis.size()-1]<<" ";
            n--;
        }
    }

}

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        solve2();
    }

    return 0;
}