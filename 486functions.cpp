#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int sum = 0;
    long long int i= 1;
    while(i <=n)
    {
        long long int a;
        if(i%2 == 0)
        a = i;
        else
        a = -i;

        sum = sum + a;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}