#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    /* 1. handle the input
     * 2. find x y coordinates
     * 3. loop subtracting/adding by ones...
    */
    vector<vector<int>> matrix(5);
    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            int in;
            cin>>in;
            matrix[i].push_back(in);
        }
    }
    int x;
    int y;
    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            if(matrix[i][j]==1) {
                x=i+1;
                y=j+1;
            }
        }
    }
    int count=0;
    while(x!=3) {
        if(x>3) --x;
        else ++x;
        ++count;
    }
    while(y!=3) {
        if(y>3) --y;
        else ++y;
        ++count;
    }
    cout<<count<<endl;
}
