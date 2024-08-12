#include <iostream>
#include <vector>

using namespace std;

int find_year(int starting_year);

int main() {
    int input;
    cin >> input;
    int ans=find_year(input)+1;
    cout << ans << endl;
}

int find_year(int starting_year) {
    while(1) {
        if(starting_year>=10000000)
            break;
        int tmp=starting_year+1;
        vector<bool> seen(10, false);
        while(tmp>0) {
            int digit=tmp%10;
            if(seen[digit])
                break;
            seen[digit]=true;
            tmp/=10;
        }
        if(tmp<=0)
            return starting_year;
        ++starting_year;
    }
    return -1;
}
