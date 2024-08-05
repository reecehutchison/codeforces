#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<char> seen;
    string in;
    int count=0;
    cin >> in;
    for(const auto& ch:in)
        seen.insert(ch);
    for(const auto& e:seen)
        ++count;
    if(count%2!=0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
}
