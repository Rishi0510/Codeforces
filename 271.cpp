#include<bits/stdc++.h>
using namespace std;
bool checker(int n)
{
    vector<int>v;
    map<int,int>m;
    while(n>0)
    {   
        int lstdg = n%10;
        v.push_back(lstdg);
        n/=10;
    }

    for(int i=0;i<v.size();i++)
    m[v[i]]++;

    if(m.size() == v.size())
    return true;
    else
    return false;
}

int main(){
    int n;
    cin>>n;
    bool cond = false;
    n = n+1;
    while(cond !=true)
    {
        cond = checker(n);
        if(cond == true)
        break;
        else
        n++;
    }

    cout<<n<<endl;
    return 0;
}