#include <iostream>
#include <string>

using namespace std;

int main() {
    int count=0;
    string s;
    cin >> s;
    for(const char& ch : s) {
        if(ch=='4'||ch=='7')
            ++count;
    }
    if(count==4||count==7)
        cout << "YES" << endl;
    else
     cout << "NO" << endl;
}
