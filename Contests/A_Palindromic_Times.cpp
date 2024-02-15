#pragma GCC optimize("O3") 

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

typedef long long int           ll;
typedef unsigned long long int  ull;
typedef long double             ld;

typedef pair<int, int>          pii;
typedef pair<ll,ll>             pll;
typedef vector<int>             vi;
typedef vector<ll>              vll;
typedef vector<pii>             vpii;
typedef vector<pll>             vpll;

#define test(t)             int t; cin >> t; while(t--)
#define f(i, a, b)          for(int (i) = (a); (i) < (b); ++(i))
#define all(a)              (a).begin(), (a).end()
#define endl                "\n"
#define ff                  first
#define ss                  second
#define pb                  push_back
#define deb(x)              cout << #x << ": " << x << endl;
#define deb2(x,y)           cout << #x << ": " << x << " ~ " <<  #y << ": " << y << endl;
#define deba(arr)           cout << #arr << " ~ [ "; for(auto n: arr) cout << n << " "; cout << "]" << endl;
#define debap(arr)          cout << #arr << " ~ [ "; for(auto n: arr) cout << n.first << "-" << n.second << " "; cout << "]" << endl;
#define fast                ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define mx9		1000000007
#define mx7		10000007
#define mx6		1000006
#define mx5		200005
#define inf		1<<30                                 
#define eps		1e-9
#define mod		1000000007
#define PI		3.141592653589793238462643383279502884L

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

long long power(int base, int exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result *= base;
        base *= base;
        exponent /= 2;
    }
    return result;
}


void solve(){
    string s;
    cin>>s;

    string aisehi = s.substr(0,2);
    reverse(all(aisehi));
    int k = stoi(aisehi);
    
    string m = s.substr(3,2);
    int curr = stoi(m);

    if(k>curr and k<60){
        cout<<s.substr(0,2)<<":"<<aisehi<<endl;
        return ;
    }

    
    int n = stoi(s.substr(0,2));
    n = ((n%24)+1)%24;
    string temp = to_string(n);
    if(n<10) temp = '0'+temp;
    reverse(temp.begin(),temp.end());
    int t = stoi(temp);

    if(t>60) n = n+(10-n%10);

    string next = to_string(n);
    if(next.length()<2) next = '0'+next;
    string prev = to_string(n);
    if(prev.length()<2) prev='0'+prev;
    reverse(next.begin(),next.end());
    cout<<prev<<":"<<next<<endl;

}

int main()
{
    fast;
    // test(t)
        solve();
    return 0;
}