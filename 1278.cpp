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
    // string s = substr(pos,len);
    string p,h;
    cin >> p >> h;
    sort(p.begin(),p.end());
    // sort(h.begin(),h.end());
    
    if(h.size() < p.size())
    {
        cout << "NO" << nline;
        return;
    }
    for(int i=0;i<h.size()-p.size()+1;i++)
    {
        string sub = h.substr(i,p.size());
        sort(sub.begin(),sub.end());
        if(sub == p)
        {
            cout << "YES" << nline;
            return;
        }
    }
    cout << "NO" << nline;
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