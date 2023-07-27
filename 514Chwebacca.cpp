#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long 
#define pb(x) push_back(x)
#define in(x) int x; cin>>x;
#define lin(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
typedef vector<int> vi;

int revnum(int n)
{
    int temp = 0;
    while(n>0)
    {
        int lst = n%10;
        temp = temp*10 + lst;
        n/=10;
    }
    return temp;
}
int main(){

    instr(s);
    rep(i,0,s.size())
    {
        int d = s[i] - '0';
        if(d > 4)
        d = 9-d;
        s[i] = d + '0';
    }
    cout << s << endl;
    
    return 0;
}