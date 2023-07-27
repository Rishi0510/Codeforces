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
    // 3-> 132 original sequene 
    // i did 3, 2, 1_2, 1_3_2
    // 4 -> 1234
    // 2,3,4,13,14,124,1234
    // 7 -> 1234567 -> 1*(n-1)single wrong combinations, + 2*(n-2)wrong combination + 3*(n-3) + .. 1 + (n==7 pe ek combination hoga iske liye + 1)

    // 2,3,4,5,6,7,13,14,15,16,17,124,125,126,127,1235,1236,1237,12346,12347,123457,1234567

     // ACCEPTED : LOGIC
     // sum + = i(n-i); isme last case me jab correct sequence ayega to i = n hojayega, islie n-i = 0, to usko alag se add kro, sum+= n;
    
    int sum = 0;
    for(int i=1;i<n;i++)
    sum+=i*(n-i);

    sum += n;

    cout << sum << nline;
}

int main(){
        achojayebas();
    return 0;
}