
#include <iostream>
using namespace std;

void printNumber(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printNumber(n-1);
}
int main() {
    int n = 5;
   printNumber(n);
    return 0;
}

// factoril

#include <iostream>
using namespace std;

 int factorial(int n){
     if(n ==0){
         return 1;
     }
     return n*factorial(n-1);
 }
int main() {
  cout<<factorial(5);
    return 0;
}