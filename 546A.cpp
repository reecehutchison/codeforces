#include <iostream>

using namespace std;

int main() {
    int k, n, w, i=1;
    cin >> k >> n >> w;
    while(w>0) {
        n-=(i*k);
        ++i;
        --w;
    }
    if(n>=0)
        n=0;
    else
        n*=-1;
    cout << n << endl;
}

/* 
 * k : cost of first banana
 * n : initial number of dollars soldier has
 * w : number of bananas that he wants
*/
