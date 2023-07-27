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
    int n,m;
    cin >> n >> m;
    char arr[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            bool snake = false;
            if(i%2 == 1)
            snake = true;
            else
            {
                if(i%4 == 0)
                snake = (j==1);
                if(i%4 == 2)
                snake = (j==m);
            }

            if(snake)
            arr[i][j] = '#';
            else
            arr[i][j] = '.';
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        cout << arr[i][j];

        cout << nline;
    }
    
}
 
int main(){

        achojayebas();
    
    return 0;
}