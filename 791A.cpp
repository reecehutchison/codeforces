#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int count=0;
    cin >> a >> b;
    while(a<=b) {
        a*=3;
        b*=2;
        ++count;
    }
    cout << count << endl;
}
