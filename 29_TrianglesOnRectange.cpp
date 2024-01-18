#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double area(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3) {
    double tarea = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return tarea;
}

void solve() {
    long long w,h,k;
    cin >> w >> h;
    long long area=0;
    for(int i=0;i<4;i++){
        cin>>k;
        long long first,last;
        for(int j=0;j<k;j++){
            int element;
            cin>>element;
            if(j==0) first=element;
            else if(j==k-1) last=element;
        }
        long long base = last-first;
        if(i<2) area=max(area,base*h);
        else area = max(area,base*w);
    }
    cout<<area<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
