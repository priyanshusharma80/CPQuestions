#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ans = 0;
    unordered_map<string,int> u = {{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        ans+=u[temp];
    }
    cout<<ans;
    return 0;
}
