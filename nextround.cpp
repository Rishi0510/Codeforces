#include<iostream>
using namespace std;
int main(){
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    cin>>arr[i];

    int cnt = 0;

    int key = arr[k];
    for(int i=1;i<=n;i++)
    {
        if(arr[k] == 0)
        cnt = 0;
        else if(arr[i]>=key && arr[i]>0)
        cnt++;
        
    }

    cout<<cnt<<endl;

    return 0;
}