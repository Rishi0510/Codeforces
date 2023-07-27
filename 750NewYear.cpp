#include<iostream>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int time = 0;
    int cnt = 0;
   
    for(int i=1;i<=n;i++)
    {   
        if(cnt<=n && time <= 240 - k)
        {
        time = time + 5*i;
        if(time <= 240 - k)
        cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
