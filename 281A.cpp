#include <iostream>
#include <string>

using namespace std;

int main() {
    string ans="";
    string in;
    cin >> in;
    for(int i=0; i<in.size(); ++i) {
        if(i==0)
            ans+=toupper(in[i]);
        else
            ans+=in[i];
    }
    cout << ans << endl;
}
