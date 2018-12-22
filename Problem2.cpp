#include <iostream>

using namespace std;

int main() {

  long long int a = 1, b = 2, sum=3, tSum = 2;
  while( sum < 4000000) {
    a = b;
    b = sum;
    sum = a +b;
    if(sum%2==0) {
      tSum += sum;
    }
  }
  cout<<tSum;
  return 0;
}