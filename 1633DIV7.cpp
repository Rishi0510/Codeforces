#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool ans = true;
        int temp;
        if(n%7 == 0)
        {
            temp = n;
        }
        else
        {
            temp = 0;
             for(int j=1;j<=9;j++)
             {
                if((n-n%10+j)%7==0)
                {
                    temp = n-n%10+j;
                }
             }
        }
        cout << temp << endl;
    }
    return 0;
}