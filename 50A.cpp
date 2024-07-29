#include <iostream>

using namespace std;

int main() {
    int n;
    int m;
    int b;
    cin>>n;
    cin>>m;
    b=n*m;
    if(b%2==0) {
        cout<<b/2<<endl;
    } else {
        cout<<(b-1)/2<<endl;
    }
}
