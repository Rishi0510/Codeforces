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
    int a,b,c;
    cin >> a >> b >> c;
    bool ans = false;
    if((2*b-c)%a == 0 && (2*b-c) !=0 && (2*b-c) >= a)
    ans = true;
    else if((2*b-a)%c == 0 && (2*b-a) != 0 && (2*b-a) >= b)
    ans = true;
    else if(2*b == a + c)
    ans = true;
    else if(b >= a + (c-a)/2 && a + (c-a)/2 % b == 0 && a + (c-a)/2 != 0)
    ans = true;

    if(ans == true)
    yes
    else
    no
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