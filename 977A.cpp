#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    while(k>0) {
        int digit=n%10;
        if(digit==0) {
            n/=10;
        } else {
            --n;
        }
        --k;
    }
    cout << n << endl;
}
