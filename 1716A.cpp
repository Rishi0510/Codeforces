#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    //n = 3 -> if(n%3) n/3 steps
    //n = 2,4,6-> if(n%2)(if(n%3) n/3)else n/2 steps:
    // 7 -> 0 3 6 9 7
    // 7%3=1 (n+2)/3 + 1
    // 11%3=2 (n-2)/3 + 1
    // if(n%3 ==0)
    // {
    //     cout << n/3 << endl;
    //     return;
    // }

    // if(n%2 == 0)
    // {
    //     cout << n/2 << endl;
    //     return;
    // } 
    if (n== 1)
    {
        cout << 2 << endl;
        return;
    }
    
    if(n == 2 || n == 3)
    {
        cout << 1 << endl;
        return;
    }
    if( n == 4)
    {
        cout << 2  << endl;
        return;
    }
    
    cout << (n+2)/3 << endl;
    
    // if(n%3 == 1)
    // {
    //     cout << (n+2)/3 + 1 << endl;
    //     return;
    // }
    // else if(n%3 == 2)
    // {
    //     cout << (n-2)/3 + 1 << endl;
    //     return;
    // }

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