#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;

    cout << (b*10000) / (a*a) << endl;

    if ((b*10000)/(a*a) >  25) {
        cout << "Obesity";
    }


    return 0;
}