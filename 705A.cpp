#include <iostream>
#include <string>

void even(int n);
void odd(int n);

using namespace std;

int main() {
    int input;
    cin >> input;

    if(input%2==0)
        even(input);
    else
        odd(input);


    return 0;
}

void even(int n) {
    string ans="";
    while(n>0) {
        if(n==1)
            ans+="I love it";
        else if(n%2==0)
            ans+="I hate that ";
        else
            ans+="I love that ";
        --n;
    }
    cout << ans << endl;
}

void odd(int n) {
    string ans="";
    while(n>0) {
        if(n==1)
            ans+="I hate it";
        else if(n%2==0)
            ans+="I love that ";
        else
            ans+="I hate that ";
        --n;
    }
    cout << ans << endl;
}
