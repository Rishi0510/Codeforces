#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long 
#define pb(x) push_back(x)
#define in(x) int x; cin>>x;
#define lin(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define nline "\n"
#define yes cout << "YES" << nline;
#define no  cout << "NO"  << nline;
#define debug(x) cout << #x << " " << x << nline;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef map<char,int> mci;


// FUNCTION FOR GCD
int gcd(int a, int b)
{ 
    if (a == 0) return b;  if (b == 0) return a; if (a == b) return a; if (a > b) return gcd(a-b, b); else return gcd(a, b-a);
}

void achojayebas()
{
    // count first and last occ, and count 0s between them.
    string s;
    cin >> s;
    int st,e, cnt = 0;
    for(int i=0;i<s.size();i++)
    if(s[i] == '1')
    {
        st = i;
        break;
    }

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i] == '1')
        {
            e = i;
            break;
        }
    }

    for(int i=st;i<=e;i++)
    {
        if(s[i] == '0')
        cnt++;
    }

    cout << cnt << nline;
    // instr(s);
    // int cnt = 0;
    // for(int i=0;i<s.size()-1;i++)
    // {
    //     if(s[i] == '1')
    //     {
    //         int j = i+1;
    //         while(s[j] != '1' && j < s.size())
    //         {
    //             cnt++;
    //             j++;
    //         }
    //     }
    // } 

    // cout << cnt << nline;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        achojayebas();
    }
    return 0;
}