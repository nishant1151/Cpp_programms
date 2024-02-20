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

    void display(){
        cout<<age<<endl;
        cout<<name;

    }

};

class Employ:public Person{
    int id;
    int salary;

    public:
    Employ(){
        id=0;
        salary=0;
        age=0;
        strcpy(name,name);
    }
    Employ(char* name,int age,int id,int salary){
        this-> age=age;
        this->salary=salary;
        this->id=id;
        strcpy(this->name,name);    

    }
   void display(){
    Person::display();
    cout<<endl<<id<<endl<<salary;
    }
};

int main(){

    Employ e1("nishant",22,432,34554443);
    e1.display();

    return 0;
}