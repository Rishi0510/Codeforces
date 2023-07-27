#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = i + 1;
    }
    int a[n];
    sort(arr,arr + n);
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 != 0)
        v.push_back(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        v.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
    cout<<v[i];
    return 0;
}