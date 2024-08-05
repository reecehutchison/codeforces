#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<int, int> nums;
    string input;
    string ans="";
    cin >> input;
    for(const auto& ch:input) {
        if(ch=='1')
            ++nums[1];
        if(ch=='2')
            ++nums[2];
        if(ch=='3')
            ++nums[3];
    }
    while(nums[1]>0) {
        ans+="1+";
        --nums[1];
    }
    while(nums[2]>0) {
        ans+="2+";
        --nums[2];
    } 
    while(nums[3]>0) {
        ans+="3+";
        --nums[3];
    }
    if(ans.size()>0)
        ans.pop_back();
    cout << ans << endl;
}
