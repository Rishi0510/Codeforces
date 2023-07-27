#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]&1)
        cnt1++;
        else
        cnt2++;
    }
    
    if(sum&1)
    {
        cout << "NO" << endl;
    }
    else
    {
        if(cnt1 == 0)
        {
            if(cnt2 & 1)
            cout << "NO" << endl;
            else
            cout << "YES" << endl;
        }
        else
        {
            if(cnt1 >=2)
            {
                cout << "YES" << endl;
            }
            else if(cnt1 == 1)
            cout << "NO" << endl;
        }
    }


    
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