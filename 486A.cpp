#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    if(n%2 == 0)
    cout<<n/2<<endl;
    else
    cout<<(-1-n)/2 <<endl;

    // EASY PATTERN
    /*
    N IS EVEN
    S = -1 + 2
    s =  0 - 1 + 2
    2s = -1 + 1 + 2
    2s =    0   +   n

    N IS ODD

    S = -1 + 2 - 3
    S =    - 1 + 2 - 3
    2S= -1 + 1 - 1 - 3
    2S = (-1) + (-N)

    */
    
    return 0;
}