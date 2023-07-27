// why a3%a1 == 0 & not a3%a2 == 0
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
        
        bool ans = true;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]%arr[0] != 0)
            {
                ans = false;
                break;
            }
        }
        if(ans == true)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}