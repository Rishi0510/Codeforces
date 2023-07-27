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
    int n;
    cin >> n;
    int sum = 0;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "Tetrahedron")
        sum+=4;
        else if(s == "Cube")
        sum+=6;
        else if(s == "Octahedron")
        sum+=8;
        else if(s == "Dodecahedron")
        sum+=12;
        else
        sum+=20;
    }   
    cout << sum << nline;
}

int main(){
    achojayebas();
    return 0;
}