#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    cin>>arr[i];

    int sum = 0;
    for(int i=0;i<t;i++)
    sum = sum + arr[i];

    if(sum >=1 )
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;

    return 0;
}