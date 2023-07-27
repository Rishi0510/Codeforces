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
    int mid,temp=n;
    vector<pair<int,int>>v;
    for(int i=n-1;i>=1;i--)
    {
        v.pb(make_pair(i,temp));
        mid = ((temp+i+1)/2); // ceil was not workking because temp was INT, and it arleady got convertdd to an integer.
        // debug(mid);
        temp = mid;
        // debug(temp);
    }
    cout << temp << nline;
    for(int i=0;i<v.size();i++)
    cout << v[i].first << " " << v[i].second << nline;
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