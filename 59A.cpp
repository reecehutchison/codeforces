#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    int lCount=0, uCount=0;
    for(const char& ch : str) {
        if(islower(ch))
            ++lCount;
        else 
            ++uCount;
    }
    string ans="";
    if(lCount>=uCount) {
        for(const char& ch : str) {
            ans+=tolower(ch);
        }
    } else {
        for(const char& ch : str) {
            ans+=toupper(ch);
        }
    }
    cout << ans << endl;
}
