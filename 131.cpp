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
    string s;
    cin >> s;
    bool check;
    string temp = s;
    if(s.size() == 1)
    {
        int c = s[0];
        if(islower(c))
        s[0] = toupper(c);
        else
        s[0] = tolower(c);
        return;
    }
    else
    {
        for(int i=1;i<s.size();i++)
        {
            if(islower(s[i]))
            check = false;
            else
            {
                int c = s[i];
                s[i] = tolower(c);
            }
        }
    }

    if( check == false)
    cout << temp << nline;
    else
    cout << s << nline;
    
}

int main(){
    achojayebas();
    return 0;
}