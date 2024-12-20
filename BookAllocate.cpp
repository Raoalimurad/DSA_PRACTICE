
#include <iostream>
#include <vector>
using namespace std;
//time complexity of thids code is 0(logN+n)
bool isValid(vector<int>arr,int nOfBok,int nOfSt,int maxAllowedP){
    int students = 1 , pages = 0;
    for(int i = 0 ; i < nOfBok;i++){
        if(arr[i]>maxAllowedP){
            return false;
        }
        if(pages+arr[i]<=maxAllowedP){
            pages+=arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    
 return  students > nOfSt?false : true;  
    
}

int allocationBooks(vector<int>arr,int nOfBok,int nOfSt){
    // if no of students is greater than nof books
    if(nOfSt > nOfBok){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i<nOfBok;i++){
        sum+=arr[i];
    }
    int st = 0,end = sum ; ///range of possible answers
    int ans = -1;
    while(st<=end){ ///N is range 0(logN)
        int mid = st +(end-st)/2;
        if(isValid(arr,nOfBok,nOfSt,mid)){ ///left
           ans = mid;
            end = mid-1;
        }else{ ///right
            st = mid+1;
        }
    }
  return ans;
    
}

int main() {
    vector<int> arr = {2,1,3,4};
    int nOfBok = 4;
    int nOfSt = 2;
    cout<<allocationBooks(arr,nOfBok,nOfSt)<<endl;

    return 0;
}