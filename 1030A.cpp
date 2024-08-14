#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool ans=false;
    int n;
    vector<int> list;
    cin >> n;
    for(int i=0; i<n; ++i) {
        int tmp;
        cin >> tmp;
        list.push_back(tmp);
    }
    for(int i=0; i<n; ++i) {
        if(list[i]==1) {
            ans=true;
            break;
        }
    }
    if(ans)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
}
