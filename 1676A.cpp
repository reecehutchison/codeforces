#include <iostream>

using namespace std;

bool check(int n);

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        int in;
        cin >> in;
        bool ans=check(in);
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

bool check(int n) {
    int first=0, last=0;
    for(int i=0; i<3; ++i) {
        int digit=n%10;
        last+=digit;
        n/=10;
    }
    for(int i=0; i<3; ++i) {
        int digit=n%10;
        first+=digit;
        n/=10;
    }
    return first==last;
}
