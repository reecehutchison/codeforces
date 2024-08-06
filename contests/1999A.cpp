#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
        int x;
        cin >> v[i];
    }
    for(int i=0; i<v.size(); i++ ) {
        int first=v[i]/10;
        int second=v[i]%10;
        int ans=first+second;
        cout << ans << "\n";
    }
}

