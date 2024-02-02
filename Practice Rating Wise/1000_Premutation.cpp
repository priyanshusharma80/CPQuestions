#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v;
    unordered_map<int,int> u;
    for(int i=1;i<n;i++){
        int element;
        cin>>element;
        u[element]=i;
        v.push_back(element);
    }

    int e;

    for(int i=1;i<=n;i++) if(u.find(i)==u.end()){
        e = i;
        u[e] = n;
        break;
    }

    for(int i=1;i<n;i++){
        vector<int> temp(n-1);
        for(int j=0;j<n-1;j++){
            cin>>temp[j];
        }

        for(int j=0;j<n-2;j++){
            if(temp[j]==e) u[e] = min(u[e],u[temp[j+1]]-1);
        }
    }

    
    

    for(int i=0;i<n-1;i++){
        if(u[e]==i) cout<<e<<" ";
        cout<<v[i]<<" ";
    }
    if(u[e]==n) cout<<e;
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}