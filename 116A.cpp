#include <iostream>
#include <vector>

using namespace std;

int find(vector<vector<int>>& stops);

int main() {
    int n;
    cin >> n;
    vector<vector<int>> input(n);
    for(int i=0; i<n; ++i) {
        int o, t;
        cin >> o >> t;
        input[i].push_back(o);
        input[i].push_back(t);
    }
    int ans=find(input);
    cout << ans << endl;
}

int find(vector<vector<int>>& stops) {
    int sum=(stops[0][0]+stops[0][1]);
    int max=sum;
    int n=stops.size();
    for(int i=1; i<n; ++i) {
        sum-=stops[i][0];
        sum+=stops[i][1];
        if(max<sum)
            max=sum;
    }
    return max;
}
