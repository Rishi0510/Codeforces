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

    // n > 5
    if( n == 2)
    {
        cout << 1 << nline;
        cout << 1 << " " << 2 << nline;
        return;
    }
    if(n == 3)
    {
        cout << 2 << nline;
        cout << 1 << " " << 3 << nline;
        cout << 2 << " " << 2 << nline;
        return;
    }
    if(n > 3)
    {
        cout << n-2 << nline;
    }
    int a = n, b= n-2;
    cout << a << " " << b << nline;
    a = n-1,b=n-1;
    cout << a << " " << b << nline;
    a = n-1,b=n-3;
    cout << a << " " << b << nline;
    while((a!= 0 || b != 0) && a >0 && b>0)
    {
        a =a-1,b=b-1;
        if(a!=0 && b!= 0)
        cout << a << " " << b << nline;
    } 

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