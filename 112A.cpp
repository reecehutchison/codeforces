#include <iostream>
#include <string>

using namespace std;

int main() {
    string in1, in2;
    cin >> in1 >> in2;
    string s1="";
    string s2="";
    for(const auto& ch:in1)
        s1+=tolower(ch);
    for(const auto& ch:in2) 
        s2+=tolower(ch);
    int val;
    if(s1==s2)
        val=0;
    else if(s1<s2)
        val=-1;
    else
        val=1;
    cout << val << endl;
}
