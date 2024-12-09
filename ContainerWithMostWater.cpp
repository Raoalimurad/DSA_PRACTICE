// Brute appraoch it time complexity is 0(n^2)

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  
 int height[] = {1,8,6,2,5,4,8,3,7};
 int maxWater = 0;
 int n = sizeof(height)/sizeof(int);
 for(int i = 0; i<n;i++){
     for(int j = i+1;j<n;j++){
         int width = j-i;
         int height = min(height[i],height[j]);
         int curWater = width*height;
         maxWater = max(maxWater,curWater);
     }
 }
cout<<maxWater;
    return 0;
}


// OPTIMAL TWO POINTER APPRAOCH;

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  
 int height[] = {1,8,6,2,5,4,8,3,7};
  int size = sizeof(height)/sizeof(int);
  int lp = 0;
  int rp = size-1;
  int maxWater = 0;
  while(lp<rp){
      int w = rp-lp;
      int h = min(height[rp],height[lp]);
      int curWater = w*h;
      maxWater = max(curWater,maxWater);
      height[lp]<height[rp] ? lp++:rp--;
      
  }
  cout<<maxWater;
    return 0;
}