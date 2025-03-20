///note base class ka constructor first call hotta hy then dericed class ks or desctructor iska opposite hotta hy
#include <iostream>
using namespace std;
class Teacher{
    public:
    string name;
    int age;
    Teacher(){
        cout<<"hello teacher";
    }
     
     
};

class Student:public Teacher{
    public:
    int rollNum;
    void getInfo(){
        cout<<"name is"<<name<<endl;
        cout<<"age is"<<age<<endl;
        cout<<"roll num is"<<rollNum<<endl;
        
    }
   
};

int main() {
    Student s1;
    s1.name = "ali";
    s1.age = 20;
    s1.rollNum = 208;
    s1.getInfo();
    return 0;
}











#include <iostream>
using namespace std;
class Teacher{
    public:
    string name;
    int age;
    Teacher(string name,int age){
        this->name = name;
        this->age = age;
    }
     
     
};

class Student:public Teacher{
    public:
    int rollNum;
    void getInfo(){
        cout<<"name is"<<name<<endl;
        cout<<"age is"<<age<<endl;
        cout<<"roll num is"<<rollNum<<endl;
        
    }
    Student(string name,int age,int rollNum):Teacher(name,age){
        this->rollNum = rollNum;
    }
   
};

int main() {
    Student s1("ali",20,205);
    s1.getInfo();
    
  
    
    return 0;
}


// ////single level inheritance
// parent -> child

// ///multilevel inheritance
// parent -> parent -> child


// #include <iostream>
// using namespace std;

// class Teacher{
//     public:
//     string name;
//     string dep;
// };

// class Student:public Teacher{
//     public:
//     int rollNum;
// };

// class PhdStudent:public Student{
//     public:
//     string subject;
// };
// int main() {
//    PhdStudent s1;
//    s1.subject = "software engineering ";
//    s1.rollNum  = 125;
//     s1.name = "alimurad";
//    cout<<s1.subject<<endl;
//    cout<<s1.rollNum<<endl;
//    cout<<s1.name;
   
    

//     return 0;
// }

//multiple inheritance

//parent     parent
    //  child



// #include <iostream>
// using namespace std;

// class Teacher{
//     public:
//     double salary;
//      string subject;
    
// };
// class Student{
//     public:
//     string name;
//     int rollNum;
// };
// class TA:public Teacher,public Student{
//     public:
//     void printInfo(){
//         cout<<"name is"<<name<<endl;
//         cout<<"roll num is "<<rollNum<<endl;
//         cout<<"salary is " <<salary<<endl;
//     }
// };

// int main() {
//   TA s1;
//   s1.name = "ali";
//   s1.rollNum = 123;
//   s1.salary = 250000;
//   s1.printInfo();
   
    

//     return 0;
// }

// hierarchial inheritance
//   partent
// chil child
// class Person{
//     public:
//     string name;
//     int age;
// };
// class Teacher:public Person{
//     public:
   
//      string subject;
    
// }; 
// class student:public Person{
//     public:
//     int rollNum
// }
  
///hybrid inheritance mixture of all inheritance