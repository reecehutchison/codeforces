#include <iostream>
#include <string>

using namespace std;

int main() {
    int count=0, n;
    string s;
    cin >> n >> s;
    for(int i=1; i<s.size();) {
        if(s[i]==s[i-1]) {
            ++count;
            s.erase(i, 1);
        } else {
            ++i;
        }
    }
    cout << count << endl;
}
