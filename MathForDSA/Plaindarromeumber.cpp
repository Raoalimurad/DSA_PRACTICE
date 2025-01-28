
#include <iostream>
#include<algorithm>
#include <climits> 
using namespace std;

int reverseNum(int n){
     int reverseNum = 0;
 while(n!=0){
     int digit = n%10;
     if(reverseNum > INT_MAX/10 || reverseNum < INT_MIN/10){
         return 0;
     }
     reverseNum = (reverseNum*10)+digit;
     n/=10;
 }
 return reverseNum;
}
//// reverse a numbaers
int main() {
 int n = 353;
 int reverse = reverseNum(n);
 if(n==reverse){
     cout<<"this is palindrome number";
 }else{
     cout<<"this isnot palindrome number"; 
 }
 
 
}