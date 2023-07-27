#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int small=0, big = 0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]) == true)
        big++;
        else 
        small++;
    }
// LOWER TO UPPER CASE : STRING CONVERSION
// SYNTAX --> STRING INPUT;CIN>>INPUT; --> INPUT = ABcd;
// transform(input.begin(), input.end(), input.begin(), ::toupper);

    if(big > small)
    transform(s.begin(),s.end(),s.begin(),:: toupper);
    else
    transform(s.begin(),s.end(),s.begin(),:: tolower);

    cout<<s<<endl;


    return 0;
}