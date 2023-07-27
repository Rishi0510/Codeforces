#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '+')
            {
                ans = ans + 1;
                break;
            }
            else if(s[i]== '-')
            {
                ans--;
                break;
            }

        }
    }

    cout<<ans<<endl;
    return 0;
}