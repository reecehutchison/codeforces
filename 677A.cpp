#include <iostream>
#include <vector>

using namespace std;

int find_width(vector<int>& heights, int& fence_height);

int main() {
    int n, h;
    cin >> n >> h;
    vector<int> input(n);
    for(int i=0; i<n; ++i) {
        int tmp;
        cin >> tmp;
        input[i]=tmp;
    }
    int ans=find_width(input, h);
    cout << ans << endl;
}

int find_width(vector<int>& heights, int& fence_height) {
    int width=0;
    for(const int& e : heights) {
        if(e>fence_height)
            width+=2;
        else
            ++width;
    }
    return width;
}
