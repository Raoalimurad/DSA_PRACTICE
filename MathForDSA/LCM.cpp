
//LCM (LOWEST COMMON MULTIPLE)
#include <iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    while(a>0 && b> 0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0)return b;
    return a;
}

int lcm(int a,int b){
    int gcdAns = gcd(a,b);
    return (a*b)/gcdAns;
}



int main() {
   cout<<lcm(20,28)<<endl;
 
}