/// ya armstrong asy number hotta jika hum indiciual value ka  cube le kar sum kare to wo usy number ka barabar ayeg

#include <iostream>
using namespace std;

bool isArmStrong(int n){
    int copyN = n;
    int sum = 0;
    while(n !=0){
        int digit = n%10;
        sum+=(digit*digit*digit);
        n/=10;
    }
    return copyN==sum;
}


int main() {
  int n = 151;
  if(isArmStrong(n)){
      cout<<"this is an armstrong number"<<endl;
  }else{
        cout<<"this is not armstrong number"<<endl; 
  }

    return 0;
}