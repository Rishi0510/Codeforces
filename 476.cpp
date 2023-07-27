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


    // max steps : n, min steps [n/2]; if there is any multiple of m in between n/2 and n then yes else no

    int n,m;
    cin >> n >> m;

    if(m > n)
    {
        cout << -1 << nline;
        return;
    }
    int minsteps;
    if(n%2 == 0)
    minsteps = n/2;
    else
    minsteps = n/2 + 1;
    while(minsteps % m > 0)
    minsteps++;

    cout << minsteps << nline;
    
    /*
        13 3
        2 2 2 2 2 2 1  -> 7
        2 2 2 2 2 11 1 -> 8
        2 2 2 2 11 11 1 => 9 hogaya,
    */  



    // approach : (WRONG)
    // take all divisors of 2 from n and then the remaining steps could be coverd in 1,1,1...n steps.(n is after 2's are taken)

    // int n,m;
    // cin >> n >> m;
    // int cnt = 0;
    // while(n%2 == 0)
    // {
    //     cnt++;
    //     n/=2;
    // }
    // cnt = cnt + n;
    // if(cnt % m == 0)
    // cout << cnt << nline;
    // else
    // cout << -1 << nline;
}

int main(){
        achojayebas();
    return 0;
}