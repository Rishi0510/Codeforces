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
   // TAKING LINE AS INPUT : STRING STR; getline(cin,str);

   string s;
   getline(cin,s);
   int i = 0;
   mci m;
   while(s[i] != '}')
   {
        if( (s[i]-'a' >=0) && (s[i] - 'a' <=25))
        m[s[i]]++;
        i++;
   }

   cout << m.size() << nline;

}

int main(){
    achojayebas();
    return 0;
}