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
    int a,b,n;
    cin >> a >> b >> n;
    
    int cnt = 0;
    int tempa=a,tempb=b;
    // har step me min number me max add kardo;
    while(tempa <= n && tempb <= n)
    {
        tempa = min(a,b);
        tempb = max(a,b);
        tempa +=tempb;
        a=tempa;b=tempb;
        cnt++;
        // debug(a);debug(b);
    }
    // mistake ye krra tha ki main a aur b ko update krra tha wrongly.
    // jaise a=15,b=10; now a = min(a,b)=10, b = max()=15;
    //a+=b -> a=25, now a = 15 b= 25;

    cout << cnt << nline;
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