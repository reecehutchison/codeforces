#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int k;
    vector<int> v;
    int c=0;
    cin>>n;
    cin>>k;
    for(int i=0; i<n; ++i) {
        int in;
        cin>>in;
        v.push_back(in);
    }
    k=v[k-1];
    for(int e:v) {
        if(e>=k&&e>0) {
            ++c;
        }
    }
    cout<<c<<endl;
}
