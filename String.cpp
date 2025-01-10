
#include <iostream>
#include<cstring>
using namespace std;

int main() {
   char str[] = {'a','b','c'};
   
//   \0 isko use karny se ya string ban jata hy or is per ap strlen wager funciton bi use kar sakt ho
      char str[] = {'a','b','c','\0'};
   
   
   ////it is printing abc club all char in one string
   cout<<str<<endl;

//but if you tak int array so it print address memory
//   int num[] = {1, 2, 3, 4};
//     cout << &(num[0]) << endl; // Address of the first element
//     cout << num << endl; 
    
    
     char str[] = "hello"; // constant literals jiski value change na ho
 
 cout<<strlen(str)<<endl;
 cout<<str[2] <<endl;  



   char str[100]; // if you only decalre so have to give n size of array
  
//   cout<<"enter the charachter: ";
//   cin>>str;

  ///but if you give me input as a sentence so it will pirnt one word like hello world so it print only hello
  
//   cout<<"the output: "<<str;
  
  
  ///if you want to take input complete phrse so you use
  
  //getline(name,size,delimter)
  
//   cout<<"enter the charachter: ";
//   cin.getline(str,100);
//   cout<<str<<endl;
  
//   delimter is a stoping charachter means stop to take input

 cout<<"enter the charachter: ";
  cin.getline(str,100,'$');
  cout<<str<<endl;











   string str = "hello world";// dynamic=> resize ho jaty hy runtime per
  str = "hello";/// like this
  
  cout<<str<<endl;
  
  
  ///concatentaion
  
  string str1 = "ali";
  string str2 = "murad";
  string str3 = str1+str2;
  cout<<str3<<endl;
  
//   match value
cout<<(str1 == str2)<<endl; ///true 1 and false 0

    
    
    return 0;
}