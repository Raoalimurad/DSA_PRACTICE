// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 8;
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        ch = ch+1;
        cout<<endl;
        
    }
    
    
    
    
    

    return 0;
}