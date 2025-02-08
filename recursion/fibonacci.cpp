//time complexity of it 0(2^n)
///space complexity is 0(n)

#include <iostream>
using namespace std;
int fib(int n){
   if(n==1 || n== 0)return n;
    return fib(n-1)+fib(n-2);
}
int main() {
  int n = 6;
  cout<<  fib(n);
    return 0;
}
