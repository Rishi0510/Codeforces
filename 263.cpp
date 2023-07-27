/*---   AUTHOR : MUSICAL_CODER1   --- */
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
    int n=5,m=5;
    int arr[5][5];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] != 0)
            n = i, m = j;
        }
    }

    cout << abs(3-n) + abs(3-m);
    

}

int main(){

    // int t;
    // cin>>t;
    // while(t--)
    // {
        achojayebas();
    // }

    return 0;
}