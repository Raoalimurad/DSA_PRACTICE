/

#include <iostream>
#include<vector>
using namespace std;


int main() {
 vector<vector <int> > mat = {{1,2,3},{24,26,28,30}};
 ///rows = mat.size();
 //col = mat[i].size()
 
 for(int i = 0 ; i < mat.size();i++){
     for(int j = 0 ; j < mat[i].size();j++){
         cout<<mat[i][j]<<" ";
     }
     cout<<endl;
 }

 
    return 0;
}
