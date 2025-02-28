
#include <iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>> &mat,int r,int c,string path,vector<int> ans){
    
    /// down call 
    
    
}
vector<int> findPath(vector<vector<int>> &mat){
     string path = "";
      vector<int>ans;
     helper(mat,0,0,path,ans);
     return ans;
}
int main() {
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
 vector<int>result =findPath(mat)

    return 0;
}