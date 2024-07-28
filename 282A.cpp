#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    vector<string>v;
    int c=0;
    cin>>n;
    for(int i=0; i<n; ++i) {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; ++i) {
        for(auto& ch:v[i]) {
            if(ch=='+') {
                ++c;
                break;
            } else if(ch=='-') {
                --c;
                break;
            }
        }
    }
    cout<<c<<endl;
}
