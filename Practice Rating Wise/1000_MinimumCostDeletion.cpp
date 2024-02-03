#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void solve() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int uniqueCount = unique(s.begin(), s.end()) - s.begin();

    int totalCost = n * a + max(n * b, (uniqueCount / 2 + 1) * b);

    cout << totalCost << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--)  solve();

    return 0;
}
