#include <iostream>
using namespace std;

int main() {


  int *arr = new int [100];
  int count_arr[9] = {0,};

  
  for(int i = 0 ; i < 100 ; i++){
    int k = 0;
    cin >> k;
    if(k > 9){
      arr[i] = k/10;
    } else if( k == 0){
      break;
    }
    
  } 

  for(int i = 0 ; i < 100 ; i++){
    count_arr[arr[i]-1]++;  
  }

  for(int i = 0 ; i<9 ; i++){
    cout << i+1 << " - "<<count_arr[i] << endl;
  }
  return 0;
}