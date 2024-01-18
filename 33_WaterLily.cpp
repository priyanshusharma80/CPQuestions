#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    (A+h)*2 = A2+L2
    h*h + 2*A*h = L*L
    A=(L*L-h*h)/2*h;
*/


int main() {
    double l,h;
    cin>>h>>l;
    cout<<fixed<<setprecision(13)<<((l*l-h*h)/(2*h));
    return 0;
}
