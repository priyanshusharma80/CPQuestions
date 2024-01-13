#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int flag=1;
    for(int i=1;i<=n;i++){
        int cnt = 0;
        for(int j=1;j<=m;j++){
            if(i%2) cout<<"#";
            else if((cnt==0 and flag and j==m) or (!flag and j==1)) cout<<"#",cnt=1,flag=!flag;
            else cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
