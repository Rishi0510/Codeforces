#include<iostream>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    while(k--)
    {   
        
        int lastdig = n%10;
        if(lastdig == 0)
        {
            n = n/10;
        }
        else
            n = n - 1;

    }

    cout<<n<<endl;
    return 0;
}