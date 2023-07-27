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
    // cf soln :

    int n;
    cin >> n;
    int arr[8];
    for(int i=1;i<=7;i++)
    cin >> arr[i];

    int today = 1;
    while (n > 0) {
        n -= arr[today];
        if (n <= 0) break;
        today ++;
        if (today == 8) today = 1;
    }

    cout << today << nline;

// MY APPROACH :
// GOT AC
    // int arr[8];
    // rep(i,1,8)
    // cin >> arr[i];
    // int sum = 0, i = 0;
    // while(sum < n)
    // {
    //     i++;
    //     // debug(i);
    //     if(i%7 == 0)
    //     sum+=arr[7];
    //     else
    //     sum+=arr[i%7];
    //     // debug(sum);
    // }
    // if(i%7 == 0)
    // cout << 7 << nline;
    // else
    // cout << i%7 << nline;
}

int main(){
    achojayebas();
    return 0;
}