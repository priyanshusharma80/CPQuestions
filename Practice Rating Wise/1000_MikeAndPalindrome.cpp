#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int cnt=0;
    int start = 0,end = s.length()-1;
    while(start<=end){
        if(s[start]!=s[end]) cnt++;
        start++,end--;
    }
    if((cnt==0 and s.length()%2) or cnt==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
