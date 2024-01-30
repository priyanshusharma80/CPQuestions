#include <iostream>
using namespace std;

void solve(){
    char a[3][3];
    char minChar = 'C';
    queue<pair<int,int>> q;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(minChar>a[i][j]) minChar=a[i][j],q.push({i,j});
        }
    }

    int row[] = {0,-1,-1,-1,0,1,1,1};
    int col[] = {1,1,0,-1,-1,-1,0,1};

    string t = a[i][j];
    while(!q.empty()){
        auto cell = q.top();
        q.pop();

        char mc='C';
        int r = cell.first;
        int c = cell.second;
        for(int i=0;i<8;i++){
            int delr = r+row[i];
            int delc = c+col[i];

            if(delr>=0 and delr<3 and delc>=0 an delc<3 and mc>a[delr][delc]) mc=a[delr][delc],q.push({delr,delc});
        }
    }



}

int main() {
    solve();
    return 0;
}
