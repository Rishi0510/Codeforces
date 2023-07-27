#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<int>v;
    while(n)
    {
        // int lastdig = n%10;
        v.push_back(n%10);
        n=n/10;
    }

    // for(int i=0;i<v.size();i++)
    // cout<<v[i];

    int cnt = 0;
   for(int i=0;i<v.size();i++)
   {
    if(v[i]==4 || v[i] == 7)
    cnt++;
   }

    if(cnt ==4 || cnt == 7)
    cout<<"YES"<<endl;
    else 
    cout << "NO" <<endl;
    return 0;
}