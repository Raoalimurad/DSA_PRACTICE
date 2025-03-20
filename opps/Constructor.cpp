
#include <iostream>
using namespace std;
class Teacher{
    public:
    string dep;
    Teacher(){
         dep = "software engineering";
    }
};

int main() {
     Teacher t1;
    cout<<t1.dep;
     
    return 0;
}

//// there are three types of constructors;
1) non_parameterized
Teacher(){
    dep = "software engineering";
}

// 2)parameterized


// #include <iostream>
// using namespace std;
// class Teacher{
//     private:
//      double salary;
//     public:
//     Teacher(){
//         cout<<"Hello teacher";
//     }
//     Teacher(string n,string d,double s,string id){
//          dep = d;
//          name =  n;
//          salary = s;
//          this->id = id;
//     }
//         string dep;
//         string name;
//         string id;
    
// };

// int main() {
//      Teacher t1("ali","software",20000,"1");
     
      

     
//     return 0;
// }




















 ///////////deconstructor
// isme se apko dynamic memory delete karny hotty hy 

// #include <iostream>
// using namespace std;
// class Teacher{
//     public:
//      string name;
//      string id;
//      Teacher(string s,string id){
//         name = s;
//         this->id = id;
//      }
//      void printInfo(){
//          cout<<"name is"<<name<<endl;
//          cout<<"id is "<<id<<endl;
         
//      }
//      ///deconstructor
//      ~Teacher(){
//          cout<<"Hello i am a delete function";
//      }
     
// };

// int main() {
//   Teacher t1("ali","djf0df90d8");
//  t1.printInfo();
//     return 0;
// }