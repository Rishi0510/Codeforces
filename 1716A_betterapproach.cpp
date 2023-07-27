#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
   
    if(n == 1)
    cout << 2 << endl;
    else if( n == 2 || n== 3)
    cout << 1 << endl;
    else if(n%3 == 0)
    cout << n/3 << endl;
    else if(n%3 != 0)
    cout << n/3 + 1 << endl;
    
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