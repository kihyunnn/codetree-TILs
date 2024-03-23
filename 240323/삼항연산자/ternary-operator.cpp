#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string pass;
    cin >> n;
    pass = n ==100 ? "pass" : "failure" ;
    cout << pass;
    return 0;
}