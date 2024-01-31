#include <bits/stdc++.h>

using namespace std;

// Custom comparator to define the priority based on the first value of the pair
struct ComparePairs {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first==b.first) return a.second>b.second;
        return a.first < b.first;
    }
};


void solve() {
    
    int n,k;
    cin>>n>>k;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]%k;
        if(a[i]<=0) a[i]=k;
    }

    vector<int> ord(n);
    // will fill the consecutive values in the vector
    iota(ord.begin(),ord.end(),0);

    stable_sort(ord.begin(),ord.end(),[&](int i,int j){
        return a[i]>a[j];
    });
    for(auto it:ord) cout<<it+1<<" ";
    cout<<endl;


    // priority_queue<pair<int, int>, vector<pair<int, int>>, ComparePairs> pq;
    // for(int i=0;i<n;i++){
    //     int element;
    //     cin>>element;
    //     pq.push({element%k,i});
    // }

    // while(!pq.empty()){
    //     auto temp = pq.top();
    //     pq.pop();
    //     if(temp.first-k<=0) cout<<temp.second+1<<" ";
    //     else pq.push({temp.first-k,temp.second});
    // }

}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
