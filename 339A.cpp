#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<int>v;
    string nums;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != '+')
            nums+=s[i];
    }



    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++)
    {
        if(i == nums.size()-1)
        cout<<nums[i];
        else
        cout<<nums[i]<<"+";
    }

    return 0;
}