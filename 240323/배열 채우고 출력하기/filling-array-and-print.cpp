#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요
    char n[10];
    for(int i = 0 ; i < 10 ; i++){
        cin >> n[i];
    }
    for(int i = 9 ; i >= 0 ; i--){
        cout << n[i];
    }
    return 0;
}