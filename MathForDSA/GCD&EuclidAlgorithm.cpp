
//GCD (GREATEST COMMON DIVISOR)
#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    //brute force approch
 /// time complexity is 0(min(a,b))
   int a = 20, b = 28;
    int gcd = 0;
   for(int i = 1 ; i < min(a,b);i++){
       if(a%i == 0 && b%i == 0){
           gcd = i;
       }
   }
  cout<<gcd;
    return 0;
}


   //EUCLID'S ALGORITHM
    // gcd(a,b) => gcd(a-b,b) //a>b
    //          =>gcd(a,b-a) /// b>a
 //gcd find kanry me hum ya wlay step jab tak karty jab tak a or b ki value 0 hojae like gcd(0,4)

 //more optomize approch 
 ///jab repeatly subract hoto better hy ka % modules lia jae example
 //a>b more greater like gcd(20,8) >> gcd(12,8) like two subtract repeatyly so we use gcd(20%8,8)








//GCD (GREATEST COMMON DIVISOR)
#include <iostream>
#include<algorithm>
using namespace std;


int gcd(int a,int b){
    
    while(a>0 && b > 0){
        if(a > b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int main() {
 
   cout<<gcd(20,28)<<endl;
 
}