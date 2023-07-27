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
    int n,m;
    cin >> n >> m;
    if(n == m)
    {
        cout << 0 << nline;
        return;
    }
    
    if( m%n != 0)
    {
        cout << -1 << nline;
        return;
    }
    if(m%2 !=0 && m%3 !=0)
    {
        cout << -1 << nline;
        return;
    }

    // if((m/n)%2 !=0 && (m/n)%3 !=0)
    // {
    //     cout << -1 << nline;
    //     return;  
    // }

    // d =  m/n, d me se 2 aur 3 ke saare divisors hata do, last me 1 nahi bacha to -1 print kardo. m = 2^x * 3^y
    int d = m/n, cnt = 0;
    while(d%2 == 0)
    {
        cnt++;
        d/=2;
    }
    while(d%3 == 0)
    {
        cnt++;
        d/=3;
    }
    if(d != 1)
    {
        cout << -1 << nline;
        return;
    }

    cout << cnt << nline;
}

int main(){
    achojayebas();
    return 0;
}