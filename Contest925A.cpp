#include <bits/stdc++.h>
using namespace std;

void solve2(){
    int n;
    cin >> n;

    string wh = "abcdefghijklmnopqrstuvwxyz";
    set<string> s;
    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= 26; j++) {
            for (int k = 1; k <= 26; k++) {
                if (i + j + k == n) {
                    // s.insert((wh[i]+'a'-1)+(wh[j]+'a'-1)+(wh[k]+'a'-1));
                    s.insert(string(1, wh[i-1]) + string(1, wh[j-1]) + string(1, wh[k-1]));
                }
            }
        }
    }
    cout<<*s.begin()<<endl;
}



void solve(){
    int n;
    cin>>n;
    string s;
    for(int j=3;j>1;j--){
        for(int i=1;i<=26;i++){
            if((n-i)/j>26) continue;
            else { s+=char('a'+i-1),n=n-i; break;}
        }
    }
    s+='a'+n-1;
    cout<<s<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve2();
    return 0;
}
