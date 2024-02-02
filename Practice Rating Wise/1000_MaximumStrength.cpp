#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int m=a.length(),n=b.length();
    while(m<n){
        a='0'+a;
        m++;
    }

    int ans=0;
    for(int i=0;i<m;i++){
        if (a[i]!=b[i]){
            // adding remainder + number of 9 (which will be equal to the remaining digits after that change digit)
            ans=((b[i]-a[i]));
            ans+=(9*(m-i-1));
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    solve();
}