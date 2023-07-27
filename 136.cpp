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
    int arr[n+1],v[n+1];
    rep(i,1,n+1)
    {
        cin >> arr[i];
        v[arr[i]] = i;
    }      

    for(int i=1;i<=n;i++)
    v[arr[i]] = i;

    for(int i=1;i<=n;i++)
    cout << v[i] << " ";
    cout << nline;
}

int main(){
    achojayebas();
    return 0;
}