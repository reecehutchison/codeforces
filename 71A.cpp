#include <iostream> 
#include <vector>
#include <string.h>

using namespace std;

int main() {
    int n;
    vector<string>v;
    vector<string>ans;
    cin>>n;
    for(int i=0; i<n; ++i) {
        string str; 
        cin>>str;
        v.push_back(str);
    }
    for(auto& s:v) {
        if(s.size()<11) {
            ans.push_back(s);
        } else {
            string result=""; 
            string count=to_string(s.size()-2); 
            result=s[0]+count+s[s.size()-1];
            ans.push_back(result);
        }
    }
    for(int i=0; i<n; ++i) {
        cout<<ans[i]<<endl;
    }
}
