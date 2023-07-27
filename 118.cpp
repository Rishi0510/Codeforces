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
    string ans = "";
    for(int i=0;i<s.size();i++)
    {
        int c = s[i];
        if(isupper(c))
        s[i] = tolower(c);

        if(s[i] != 'a' && s[i] !='e' && s[i] != 'i' && s[i] != 'o' && s[i] !='u' && s[i] != 'y'
         /*ye case miss krdiya tha main padha hi nahi tha ki y ke liye bhi check krna hai*/)
        {
            ans+='.';
            ans+=s[i];
        }
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];
    cout << nline;
}

int main(){
    achojayebas();
    return 0;
}

