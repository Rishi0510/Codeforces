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
    // YESSSS AC :
    string s;
    cin >> s;
    bool check=true;
    bool firstisupper;
    int a = s[0];
    if(isupper(a))
    firstisupper = true;
    else
    firstisupper = false;

    for(int i=1;i<s.size();i++)
    {
        int c = s[i];
        if(islower(c))
        {
            check = false;
            break;
        }
    }   

    if(firstisupper == false && check == false)
    {
        cout << s << nline;
    }
    else if(firstisupper == false && check == true)
    {
        int a = s[0];
        s[0] = toupper(a);
        cout << s[0];
        for(int i=1;i<s.size();i++)
        {
            int c =s[i];
            s[i] = tolower(c);
            cout << s[i];
        }
    }
    else if(check == false && firstisupper == true)
    cout << s << nline;
    else if(firstisupper == true && check == true)
    {
        for(int i=0;i<s.size();i++)
        {
            int c = s[i];
            s[i] = tolower(c);
            cout << s[i];
        }
    }
    cout << nline;
}

int main(){
    achojayebas();
    return 0;
}