#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int>ans;
    int m = mat.size(),n = mat[0].size();
    int stRow = 0,stCol = 0;
    int endRow = m-1, endCol = n-1;
   while(stRow<=endRow && stCol<=endCol){
        for(int i = stRow; i<= endCol;i++){
          ans.push_back(mat[stRow][i]);
    }
    
    for(int j = stRow+1; j<=endRow;j++){
        ans.push_back(mat[j][endCol]);
    }
  
    for(int i =endCol-1; i>=stRow;i--){
        if(stRow == endRow){
            break;
        }
        ans.push_back(mat[endRow][i]);
    }
   
    for(int j =endRow-1; j>=stRow+1;j--){
        if(stCol==endCol){
            break;
        }
        ans.push_back(mat[j][stCol]);
    }
    stRow++,endRow--,stCol++,endCol--;
    
    
    

   }
   
   
   
   
   for(int val:ans){
       cout<<val<<" ";
   }
   
   
   
   
   
   
   
    return 0;
}
