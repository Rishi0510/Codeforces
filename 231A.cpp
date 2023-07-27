#include<iostream>
using namespace std;
int main (){

    int cnt =0;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c >=2)
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}