#include<iostream>
#include<cstring>
using namespace std;

class Person{
    protected:
    int age;
    char name[20];
public:
    Person(){
        age=0;
        strcpy(name,"na");
    }
    Person(int age,char* name){
        this->age=age;
        strcpy(this->name,name);
    }
    Person(Person &k)
    {
        age=k.age;
        strcpy(name,k.name);
    }

    void displayperson(){
        cout<<"age="<<age<<"name"<<name;
    }
};

class Employee:public Person{
    int eid;
 
    public:
    Employee(){
    eid=0;    
        }
Employee(int eid,char* name,int age):Person(age,name){
            this->eid=eid;
}
Employee(Employee &k):Person(k){
    eid=k.eid;
}
void displayEmployee(){
cout<<age<<endl<<name<<endl<<eid;
}

};

int main(){
    Employee e1(5,"abc",33);
    e1.displayEmployee();
    return 0;                         
}                       
