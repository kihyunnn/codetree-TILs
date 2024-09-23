#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int *arr = new int [n];
  int count_arr[9] = {0,};
  
  for(int i = 0 ; i <n ; i++){
    cin >> arr[i];
  } 

  for(int i = 0 ; i < n ; i++){
    count_arr[arr[i]-1]++;  
  }

  for(int i = 0 ; i<9 ; i++){
    cout << count_arr[i] << endl;
  }
  return 0;
}