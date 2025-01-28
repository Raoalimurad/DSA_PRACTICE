
#include <iostream>
#include<algorithm>
using namespace std;


//// reverse a numbaers
int main() {
 int n = 7896;
 int reverseNum = 0;
 while(n!=0){
     int digit = n%10;
     reverseNum = (reverseNum*10)+digit;
     n/=10;
 }
 cout<<reverseNum<<endl;
 
}