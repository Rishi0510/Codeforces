#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi = max((s[i]-'a'),maxi);
    }

    cout << maxi + 1 << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}