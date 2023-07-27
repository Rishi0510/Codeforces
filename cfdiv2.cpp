#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
         float a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a/b == c/d)
        cout<<0<<endl;

        else if(a==0 || c== 0)
        cout<<1<<endl;

        
    }

    return 0;
}