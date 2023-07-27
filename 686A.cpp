#include<iostream>
using namespace std;
int main(){

         long long int n , x;
        cin >> n >> x;
        int cnt = 0;
        while(n--)
        {
            char c;
            long long int a;
            cin >> c >> a;
            if(c == '+')
            {
                x+=a;
            }
            else if(c == '-')
            {
                if(x >= a)
                {
                    x-=a;
                }
                else
                cnt++;
            }
        }

        cout << x << " " << cnt << endl;

    return 0;
}