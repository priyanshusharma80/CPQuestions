#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    /*
     n Friends
     k bottles
     each bottle has l millilitres of drink
     total drink : k*l;
     total Lime slices : c*d -> c- no of limes, d is no of slices cutted
     p grams of salt

     friends    1 2 3 4 5 ...... n
     drink      nl nl nl nl nl ... = n*nl
     slice      1 1 1 1 1 ..... n slices 
     salt       np np np np np np ... = n*np

     so for k bottles we'll be needed
     drink -> n*nl*x = k*l
     slice -> n*y = c*d
     salt -> n*np*z = p;

     So if any of the accessories is get exhausted, that will be 
     the actual amount we can make 

     so the min of (drink,slice,salt) would be the answer

    
    */

    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x = (k*l)/(n*nl);
    int y = c*d/n;
    int z = p/(n*np);

    int res= min(x,min(y,z));
    cout<<res<<endl;
    return 0;
}
