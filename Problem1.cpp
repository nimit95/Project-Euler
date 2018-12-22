#include<iostream>

using namespace std;

int main() {

  long long int sum=0;
  for(int i=3;i<1000;i = i + 3)  {
    sum += i;
  }
  for(int i=5;i<1000;i = i + 5)  {
    sum += i;
  }
  for(int i=15;i<1000;i = i + 15)  {
    sum -= i;
  }
  cout<<sum;
  return 0;
}