#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    map<char, int> frequency;
    for(int i = 0; i < s.length(); i++) 
        frequency[s[i]]++;

    string result = "";
    for(auto it : frequency) {
        if(it.second % k != 0) {
            cout << "-1" << endl;
            return 0;
        }
        result.append(it.second / k, it.first);
    }

    for(int i = 0; i < k; i++)
        cout << result;
    
    cout << endl;
    return 0;
}
