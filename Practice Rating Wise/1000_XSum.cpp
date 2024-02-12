#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>v[i][j];
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum = 0;
            int ci=i,cj=j;
            // UP LEFT SIDE
            while(ci>=0 and ci<n and cj>=0 and cj<m){
                sum+=v[ci][cj];
                ci--,cj--;
            }

            ci=i,cj=j;
            // UP RIGHT SIDE
            while(ci>=0 and ci<n and cj>=0 and cj<m){
                sum+=v[ci][cj];
                ci--,cj++;
            }

            ci=i,cj=j;
            // LOW LEFT SIDE
            while(ci>=0 and ci<n and cj>=0 and cj<m){
                sum+=v[ci][cj];
                ci++,cj--;
            }

            ci=i,cj=j;
            // LOW RIGHT SIDE
            while(ci>=0 and ci<n and cj>=0 and cj<m){
                sum+=v[ci][cj];
                ci++,cj++;
            }

            // subtracting duplicate value;
            sum-=(v[i][j]*3);
            mx = max(mx,sum);
        }
    }
    cout<<mx<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
