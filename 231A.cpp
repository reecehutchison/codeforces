#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=0; 
    vector<vector<int>> votes(n);
    for(int i=0; i<n; ++i) { 
        for(int j=0; j<3; ++j) {
            int in;
            cin>>in;
            votes[i].push_back(in);
        }
    }
    for(int i=0; i<n; ++i) {
        int count=0;  
        for(int j=0; j<3; ++j) {
            if(votes[i][j]) ++count; 
        }
        if(count>=2)++ans; 
    }
    cout<<ans<<endl;
}
