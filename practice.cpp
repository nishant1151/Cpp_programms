#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private:
    int age;
    public:
    Person(int age){
        this->age=age;
    }
   void display(){
    cout<<age;
   }
};
class employee:public Person{
    int salary;
    public:
    employee(int salary,int age):Person(age){
        this->salary=salary;
    }
    void display(){
        cout<<salary;
    }

};


int main()
{
    employee e1(50000,50);
    e1.display();

    

    return 0;
}