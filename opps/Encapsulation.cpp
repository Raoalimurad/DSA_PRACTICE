// Encapsulation means wrapping data (variables) and methods (functions) together in a single unit (class)



#include <iostream>
using namespace std;
class Teacher{
    private:
     int salary;
    public:
    string name;
    /// constructor
    Teacher(){
        cout<<"helllo world";
    }
    /// setters
    void setSalary(int s){
        salary = s;
    }
    ///getters
    int getSalary(){
        return salary;
    }
};
int main() {
     Teacher t1;
     t1.setSalary(300);
      cout<<endl;
     cout<<t1.getSalary();
     
    return 0;
}


class Account{
    private:
     double balance;
      int password;     /// hiding data
    public:
    string username;
    string userId;
}