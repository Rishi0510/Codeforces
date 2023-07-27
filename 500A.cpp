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
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=1;i<=n-1;i++)
    cin >> arr[i];

    bool check = false; int i = 1;
    while(i<=k)
    {
        i+=arr[i];
        if(i == k)
        {
            check = true;
            break;
        }
    }
    if(check == true)
    cout << "YES" << nline;
    else
    cout << "NO" << nline;
}

int main(){
    achojayebas();
    return 0;
}