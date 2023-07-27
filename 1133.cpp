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
    string a,b;
    cin >> a >> b;
    // convert a to minues:
    int hra=0,mina=0;
    hra= (a[0]-'0')*10 + (a[1]-'0');
    mina = (a[3]-'0')*10 + a[4]-'0';

    mina = mina + 60*hra;

    // convert b to minutes:
    int hrb=0,minb=0;
    hrb = (b[0]-'0')*10 + b[1]-'0';
    minb = (b[3]-'0')*10 + b[4]-'0';

    minb+=60*hrb;

    int midpt = (mina+minb)/2;
    int hrmid = midpt/60;
    int minmid = midpt%60;
    string ans = "";
    if(hrmid < 10)
    {
        cout << 0<<hrmid<<":";
        if(minmid < 10)
        cout << 0 << minmid << nline;
        else
        cout << minmid << nline;
    }
    else
    {
        cout << hrmid << ":";
        if(minmid < 10)
        cout << 0<< minmid << nline;
        else
        cout << minmid << nline;
    }


}

int main(){
    
        achojayebas();
    return 0;
}