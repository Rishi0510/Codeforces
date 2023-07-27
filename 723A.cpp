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
    int arr[3];
    for(int i=0;i<3;i++)
    cin >> arr[i];
    sort(arr,arr+3);
    if(arr[1] == (arr[2] + arr[0])*2);
    {
        cout << arr[1] << nline;
        return;
    }
    int d1 = arr[1]-arr[0] + arr[2]-arr[0];
    int d2 = arr[2]-arr[0] + arr[2]-arr[1];
    cout << min(d1,d2) << nline;
}

int main(){

    // int t;
    // cin>>t;
    // while(t--)
        achojayebas();

    return 0;
}