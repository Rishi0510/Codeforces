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
    int arr[101] = {0};
    int n,cnt=0;
    cin >> n;
    int p;
    cin >> p;
    while(p--)
    {
        int a;
        cin >> a;
        arr[a]++;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int b;
        cin >> b;
        arr[b]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i] == 0)
        cnt++;
    }
    if(cnt == 0)
    cout << "I become the guy.";
    else
    cout << "Oh, my keyboard!";
    cout << nline;
}

int main(){
    achojayebas();
    return 0;
}