#include <iostream>
#include <string>

using namespace std;

bool check(string s1, string s2);

int main() {
    string first, second;
    cin >> first >> second;
    if(check(first, second))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
bool check(string s1, string s2) {
    if(s1.size()!=s2.size())
        return false;
    int i=0;
    int n=s1.size();
    int j=s2.size()-1;
    while(i<n&&j>=0) {
        if(s1[i]!=s2[j])
            return false;
        ++i;
        --j;
    }
    return true;
}

