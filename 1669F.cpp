// Codeforces Round #784 (Div. 4) QUES F : SOLVED YAYYY!
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
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];

    int s=0,e=n-1,sums=arr[0],sume=arr[n-1],cnt=2;
    vector<int>v;
    // v.pb(cnt);
    while(s<e)
    {

        if(sums > sume)
        {
            e--;
            cnt++;
            sume+=arr[e];
        }
        else if(sums < sume)
        {
            s++;
            cnt++;
            sums+=arr[s];
        }
        else
        {
            v.pb(cnt);
            cnt+=2;
            s++,e--;
            sums+=arr[s];
            sume+=arr[e];
        }
    }
    if(v.size()==0)
    {
        cout << 0 << nline;
        return;
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1] << nline;
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