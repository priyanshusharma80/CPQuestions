#include<bits/stdc++.h>
using namespace std;

// void solve(){
//     // int n;
//     // cin>>n;

//     // vector<int> a(n),b(n);
//     // vector<pair<int,int>> ind;
//     // for(int i=0;i<n;i++) cin>>a[i],ind.push();
//     // for(int i=0;i<n;i++) cin>>b[i];


// }

int main(){
    // int t;
    // cin>>t;
    // while(t--) solve();

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n), cnt(n + 1, 0);
        vector<int> greater_count(n);

        // Input permutation a
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // Input permutation b
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        // Count the number of elements greater than the current element in permutation a
        stack<int> mono_stack;
        for(int i = n-1; i >= 0; i--){
            while(!mono_stack.empty() && a[i] > a[mono_stack.top()]){
                cnt[a[mono_stack.top()]] += (n - i - 1);
                mono_stack.pop();
            }
            mono_stack.push(i);
        }

        // Calculate the count of greater elements in permutation b using the count from permutation a
        for(int i = 0; i < n; i++){
            greater_count[i] = cnt[b[i]];
        }

        // Mono sort permutation b based on the count of greater elements
        vector<pair<int, int>> mono_sort;
        for(int i = 0; i < n; i++){
            mono_sort.push_back({greater_count[i], b[i]});
        }

        sort(mono_sort.begin(), mono_sort.end(), greater<pair<int, int>>());

        // Output the results
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

        for(int i = 0; i < n; i++){
            cout << mono_sort[i].second << " ";
        }
        cout << endl;
    }

    return 0;

}
