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
   in(n);
   // 1 - I hate it
   // 2 - I hate that I love it
   // 3 - I hate that I love that I hate
  string a = " that I love";
  string b = " that I hate";
  string ans = "";
  for(int i=0;i<n;i++)
  {
    if(i == 0)
    ans+="I hate";
    else if(i%2 != 0)
    {
        ans+=a;
    }
    else
    ans+=b;
  }
  ans+=" it";
  cout << ans << nline;

}

int main(){
    achojayebas();
    return 0;
}