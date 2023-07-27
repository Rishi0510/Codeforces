#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string a,b;
    cin>>a>>b;
    int ans=0;
    
    
    
    for(int i=0;i<a.size();i++)
    {
        if(isupper(a[i]))
        {
            continue;
        }
        else
        a[i] = toupper(a[i]);
        
        if(isupper(b[i]))
        continue;
        else
        b[i] = toupper(b[i]);
        
    }
    
    // for(int i=0;i<a.size();i++)
    // {
    //     if(a[i] - b[i] < 0)
    //     {
    //         ans = -1;
    //         break;
    //     }
    //     else if(a[i] - b[i] > 0)
    //     { 
    //         ans  = 1;
    //         break;
    //     }
    //     else
    //     ans==0;
        

        
            // THIS DID NOT WORKED
    // }
    
    // if(a>b)
    // cout<<1<<endl;
    // else if(a<b)
    // cout<<1<<endl;
    // else
    // cout<<0<<endl;
    // cout<<ans<<endl;

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<" ";
    
    return 0;
}