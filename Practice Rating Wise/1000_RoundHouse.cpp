#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    b = ((b%n)+n)%n;
    int res = (a + b - 1 + n) % n + 1;
    cout<<res<<endl;
    return 0;
}
