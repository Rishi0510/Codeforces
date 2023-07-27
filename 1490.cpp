#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        int ans = 0;

        int cnt = 0;
        for(int i=0;i<n-1;i++)
        {
            if(max(arr[i],arr[i+1]) > 2*min(arr[i],arr[i+1]))
            cnt++;
        }

        if(cnt == 0)
        {
            ans = 0;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(max(arr[i],arr[i+1]) > 2*min(arr[i],arr[i+1]))
                {
                    int cur = min(arr[i],arr[i+1]);
                    while(max(arr[i],arr[i+1]) > 2*cur)
                    {
                        ans++;
                        cur*=2;
                    }

                }
            }
        }
        cout << ans << endl;

    }
    return 0;
}