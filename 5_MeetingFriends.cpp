#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    /*

    3 Friends
    Ox straight line
    first friend -> x1
    second -> x2
    third -> x3

    we've to find out minimum distance they have to travel in order to meet

    7 1 4
    let's say 7 is that point -> 
            1->7 = 6
            4->7 = 3    total 9
    let's say 2 : 
            1->2 = 1
            7->2 = 5
            4->2 = 2    total 8
    let's say 3:
            1->3 = 2
            4->3 = 1
            7->3 = 4    total 7
    let's say 5:
            1->5 = 4
            4->5 = 1
            7->5 = 2    total 7
    let's say 6:
            1->6 = 5
            4->6 = 2
            7->6 = 1    total 8
    
    */
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int mini = abs(x1-x2)+abs(x1-x3);
    int a = min(x1,min(x2,x3));
    int b = max(x1,max(x2,x3));

    for(int i=a+1;i<b;i++){
        int total = abs(x1-i)+abs(x2-i)+abs(x3-i);
        mini = min(mini,total);
    }

    cout<<mini<<endl;
    return 0;
}
