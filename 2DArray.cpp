
#include <iostream>
using namespace std;

int main() {
   
int matrix[2][3];
int rows = 2;
int col = 3;



//replace value
 matrix[0][1] = 55;
 
 for(int i = 0; i < rows;i++){
     for(int j = 0 ;  j< col;j++){
         cin>>matrix[i][j];
     }
   
 }


for(int i = 0 ; i < rows; i++){
    for(int j = 0 ; j<col ;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}



/////////////// how 2D element in array store in memory
/// two ways which follow
///1) major row it is more common  2) major column 
/// 1) row major me linear way me hi store hotty hy means phley 1st row ki elements then 2nd like his

///oppposite of it
 
    return 0;
}






// linear search in 2D ARRAY

#include <iostream>
using namespace std;

int linearSearch(int matrix[][3],int rows,int col,int key){
    
    for(int i = 0; i < rows;i++){
    for(int j = 0 ; j < col;j++){
        if(matrix[i][j] == 3){
            cout<<" this value found"<<endl;
            return matrix[i][j];
        }
    }
}
return 0;
}
int main() {
   
int matrix[2][3] = {{1,2,3},{4,5,6}};
int rows = 2;
int col = 3;

cout<<linearSearch(matrix,rows,col,3)<<endl;

 
    return 0;
}


/// return pair of linear search 

// #include <iostream>
// #include<utility>
// using namespace std;

// pair<int,int> linearSearch(int mat[][3],int rows,int col,int key){
    
//     for(int i = 0 ; i < rows; i++){
//         for(int j = 0 ; j < col;j++){
//             if(mat[i][j] == key){
//                 cout<<"value found"<<endl;
//                 return make_pair(i,j);
//             }
//         }
//     }
//     return make_pair(-1,-1);
// }

// int main() {
   
// int matrix[2][3] = {{1,2,3},{4,5,6}};
// int rows = 2;
// int col = 3;

// pair<int,int> result = linearSearch(matrix,rows,col,4);

// if (result.first != -1) {
//         cout << "Row: " << result.first << ", Column: " << result.second << endl;
//     } else {
//         cout << "Value not found" << endl;
//     }


 
//     return 0;
// }


///FIND THE LARGEST POSSIBLE SUM OF ROW and col

#include <iostream>
#include<climits>
using namespace std;


int main() {
   
int matrix[2][3] = {{1,2,3},{4,5,6}};
int rows = 2;
int col = 3;
 int result = INT_MIN;
for(int i = 0 ; i < col; i++){          ///if you want to row sum so replce row and col
   int sum = 0;
    for(int j= 0; j< rows ; j++){
        sum+=matrix[i][j];
    }
    result = max(sum,result);
}

cout<<result;
 
    return 0;
}



///FIND THE Diagonal sum of matirx or square matrix

#include <iostream>
#include<climits>
using namespace std;
int diagonalSum(int mat[][3],int n){
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            if(i==j){    ////primary diagonal
                sum+=mat[i][j];
            }else if(j == n-1-i){
                sum+=mat[i][j];
            }
        }
    }
    return sum;
}

int main() {
   
int matrix[3][3] = {{1,2,3},{4,5,6},{9,10,11}};
int n = 3;
  cout<<diagonalSum(matrix,n)<<endl;

 
    return 0;
}


//OPTOMIZE APPROCH
///FIND THE Diagonal sum of matirx or square matrix

#include <iostream>
#include<climits>
using namespace std;
int diagonalSum(int mat[][3],int n){
    int sum = 0;
    for(int i = 0 ; i < n; i++){
       sum+=mat[i][i];
       if(i != n-1-i){
           sum+=mat[i][n-1-i];
       }
    }
    return sum;
}

int main() {
   
int matrix[3][3] = {{1,2,3},{4,5,6},{9,10,11}};
int n = 3;
  cout<<diagonalSum(matrix,n)<<endl;

 
    return 0;
}