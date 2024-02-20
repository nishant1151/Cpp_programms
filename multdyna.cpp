#include <iostream>
#include <cstring>
using namespace std;
class Person
{
protected:
    int *age;
    char *name;

public:
    Person()
    {
        // cout<<"Defoult"<<endl;
        age = new int(0);
        name = new char[3];
        strcpy(name, "NA");
    }
    Person(int age, char *name)
    {
        this->age = new int(age);
        this->name = new char[20];
        strcpy(this->name, name);
    }
    void displayPerson()
    {
        cout << *age << endl
             << name;
    }
    void setAge(int age)
    {
        this->age = new int(age);
    }
    void setName(char *name)
    {
        this->name = new char[20];
        strcpy(this->name, name);
    }
    ~Person()
    {
        delete age;
        delete[] name;
    }
};
class Employee : public Person
{
protected:
    int *eid;

public:
    Employee()
    {
        eid = 0;
    }
    Employee(int age, char *name, int eid) : Person(age, name)
    {
        this->eid = new int(eid);
    }
    void displayEmployee()
    {
        cout << *eid << endl
             << *age;
    }
    void setEid(int eid)
    {
        this->eid = new int(eid);
    }
};
class Developer : public Employee
{
    char *prName;

public:
    Developer()
    {
        prName = new char[4];
        strcpy(prName, "NA");
    }
    Developer(int age, char *name, int eid, char *prName) : Employee(age, name, eid)
    {
        this->prName = new char[30];
        strcpy(this->prName, prName);
    }
    void displayDeveloper()
    {
        cout << *eid << endl
             << *age << endl
             << prName;
    }
};
int main()
{

    Developer d1(24, "ABC", 25000, " project");
    d1.displayDeveloper();
}
