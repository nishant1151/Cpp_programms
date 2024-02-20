#include<iostream>
#include<cstring>
using namespace std;
class Person{
    protected:
    int age;
    char name[25];
    public:
    Person(){
        age=0;
        strcpy(name,"NA");
    }
    Person(int age,char* name){

        this->age=age;
        strcpy(this->name,"name");
    }
    Person(Person &k){
        age=k.age;
        strcpy(name,k.name);
    }
    void displayperson(){
        cout<<"hello"<<age<<name;
    }
};
class Employee:public Person{
    protected: 
    int eid;
    char company_name[55];
    public:
    Employee(){
        eid=0;
        strcpy(company_name,"Na");
    }

    Employee(int age,char* name,int eid,char* company_name):Person(age,name){
        this->eid=eid;
        strcpy(this->company_name,company_name);
    }
    Employee(Employee &k):Person(k.age,k.name){
        eid=k.eid;
        strcpy(company_name,k.company_name);
    }

    void displayEmployee(){
        // displayperson();
        cout<<endl<<eid<<company_name;
    }
};

class Developer:public Employee {
    char project_name[55];
    public:
    Developer(){
        strcpy(project_name,"NA");
    }    
    Developer(int age,char *name,int eid,char* company_name,char* project_name):Employee(age,name,eid,company_name){
        strcpy(this->project_name,project_name);
    }
    Developer(Developer &k):Employee(k){
        strcpy(project_name,k.project_name);
    }
    void displayDeveloper(){
        displayperson();
        displayEmployee();
    cout<<project_name;
    }
};


int main(){
    Developer obj1(25,"nishant",2321,"winsoft","hello");
    obj1.displayDeveloper();
    Developer obj2(obj1);
    obj2.displayDeveloper();
    return 0;
}





