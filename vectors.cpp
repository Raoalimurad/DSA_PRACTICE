// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     // Write C++ code here
//     vector <int> vec(3,5);//intialzie vector
//     vector <int> veec = {4,5,6};
//     cout<<vec[1]<<endl;
//     cout<<veec[0];
    
    
//     //  for each loop in vector
//     vector <char> alphabet = {'a','b','c','d'};
//     for(char val:alphabet){
//         cout<<val<<endl;
//     }

//     return 0;
// }


// vector fucnctions

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     // Write C++ code here
// //  vector functions
//     vector <int> vec = {4,5,6,7,9};
    
//     // 1)size
//     cout<<"size = "<<vec.size()<<endl;
    
//     // 2 push_back it push value in last
//     vector <int> num;
//     cout<<"size befor"<<num.size()<<endl;
//     num.push_back(10);
//      cout<<"size After"<<num.size()<<endl;
    
//     // 3) pop_back()
//     vec.pop_back();
//      cout<<"size After"<<vec.size()<<endl;
    
//     // 4) front it give front value
//     cout<<vec.front()<<endl;
//     // 5) last value given
//     cout<<vec.back()<<endl;
//     // 6 at 
//     cout<<vec.at(0)<<endl;
    

//     return 0;
// }



// vectpr property

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
    
// //   vector size and capacity ya property hotty hy 
// //vector ki jab bi hum vector ka andar value store karty hy wo store hotty agar jaga na ho to wo us size ka double ho jata hy example 1 hy 2 2 hy to 4

// vector <int> num;
// num.push_back(10);
// num.push_back(15);
// num.push_back(35);

// //  ya asy how ka phely 10 ayia or store hogya jab 15 ayia to usene use array me store hony ki try ki per space nahi ty to naya array create howa previos ka double ka yani 2 or 15 bi store hogya then 35 ayia per jaga nahi ty to double howa 2 ka 4 hogya 35 store hogya or ak space rah gye jabhi size 3 hy or capacity 4

// cout<<num.size()<<endl;//3
// cout<<num.capacity()<<endl;//4
    

//     return 0;
// }


// for match one value



// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
    
//  int num[5] = {1,2,1,2,5};
//  int size = 5;
//  for(int i = 0; i< size;i++){
//      bool isUnique= true;
//      for(int j = 0; j< size;j++){
//          if(i!=j && num[i] == num[j]){
//              isUnique = false;
//              break;
//          }
//      }
//      if (isUnique) {
//     cout << num[i] ;
// }

//  }
 
    

//     return 0;
// }


// single number

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
    
//  int num[5] = {1,2,1,2,5};
//  int size = 5;
//  int ans = 0;
//  for(int i = 0; i< size;i++){
//      ans = ans^num[i];
//  }
//  cout<<ans;
 
    

//     return 0;
// }