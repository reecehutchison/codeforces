#include <iostream>

using namespace std;

int main() {
    int count=0, n;
    cin >> n;
    while(n>=5) {
        ++count;
        n-=5;
    }
    if(n!=0)
        ++count;
    cout << count << endl;
}
