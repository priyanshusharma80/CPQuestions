#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    n friends 
    petya likes watching others giving gifts to somebody else

    friends: 1 2 3 4 ... n
    i -> p(i)
    each of his friend recieved exactly one gift

    1 2 3 4  -> 1 2 3 4
    2 3 4 1  -> 4 1 2 3

    */

    int n;
    cin>>n;
    int ans = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sum+=(b-a);
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
