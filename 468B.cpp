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
    int m,n;
    cin >> m >> n;
    int b[m+1][n+1];
    int a[m+1][n+1];
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        cin >> b[i][j];
        a[i][j] = 1;
    }

    //agar b me koi 0 hai to a me us row aur col me sab 0 hone chaiye
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(b[i][j] == 0)
            {
                for(int p = 1;p<=m;p++)
                {
                    a[p][j] = 0;
                }
                for(int p = 1;p<=n;p++)
                    a[i][p] = 0;
            }
        }
    }

    // agar b me ek 1 hai to atleast us row ya col me ek 1 hona chiaye, nahu hua to NO else yes and print A matrix
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(b[i][j] == 1)
            {
                int cnt = 0;
                for(int p=1;p<=m;p++)
                {
                    if(a[p][j] == 1)
                    cnt++;
                }
                for(int p=1;p<=n;p++)
                {
                    if(a[i][p] == 1)
                    cnt++;
                }
                if(cnt == 0)
                {
                    cout << "NO" << nline;
                    return;
                }
            }
        }
    }
    cout << "YES" << nline;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        cout << a[i][j] << " ";
        cout << nline;
    }
}

int main(){
    achojayebas();
    return 0;
}