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
    vector<int> temp(n,0);
    for(int i=1;i<=n;i++){ int element; cin>>element,temp[element-1]=i;}
    for(auto it:temp) cout<<it<<" ";
    cout<<endl;
    return 0;
}
