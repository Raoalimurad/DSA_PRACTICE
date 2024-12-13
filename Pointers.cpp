
#include <iostream>
using namespace std;
int main() {
   int a = 10;
   int* ptr = &a;
   cout<<&a<<endl;
   cout<<ptr<<endl;


int b = 15;
int* ptr1 = &b;
int** parPtr1 = &ptr1;
cout<<parPtr1<<endl;
cout<<&ptr1<<endl;

 int c = 19;
 cout<<*(&c);
 

// q no 1
 int a = 10;
   int* ptr = &a;
   int** parPtr = &ptr;
   
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
   cout<<*parPtr<<endl;
   cout<<**parPtr<<endl;


 

    return 0;
}

// pass by refernce by pointer

#include <iostream>
using namespace std;
void changeValue(int* ptr){
    *ptr = 20;
}
int main() {
  int a = 10;
  changeValue(&a);
   
 cout<<"the value of a is "<<a;
 

    return 0;
}

// pass by refernce by alias

#include <iostream>
using namespace std;
void changeValue(int &ptr){ //& this is alias alias is the another name of that person means ali or rao two names but person1
    ptr = 20;
}
int main() {
  int a = 10;
  changeValue(a);
   
 cout<<"the value of a is "<<a;
 

    return 0;
}

// array pointer  it is constant pointer
 int arr[] = {1,3,4,6,5};
 cout<<*arr; // it will store first value of arr[0] means 1


#include <iostream>
using namespace std;
int main() {
int arr1[] ={20,30,40,50};
int* ptr = arr1;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+3)<<endl;
 
}