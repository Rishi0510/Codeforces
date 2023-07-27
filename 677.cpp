#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int width = 0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<= h)
        width++;
        else if(arr[i] > h && arr[i] <=2*h)
        width = width + 2;
    }

    cout<<width<<endl;
    
    return 0;
}