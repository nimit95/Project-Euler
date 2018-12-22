#include <iostream>

using namespace std;

int main() {

  long long int i=2, num = 600851475143;
  int *a = new int[100000000]; 
  memset(a, 0, 100000000);
  while( i  < 775146) {
    if(a[i] == 0) {
      //cout<<"goof";
      //cout<<i<<"-";
      if(num % i == 0) {
        num = num/i;
        cout<<i<<endl;
      }
      for(long long int j= i * i;j< 775146; j = j + i){
        //cout<<j<<endl;
        a[j]  = 1;
      }
    }
    i++; 
  }
  cout<<num;
  return 0;
}