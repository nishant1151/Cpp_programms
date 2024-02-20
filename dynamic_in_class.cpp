#include<iostream>
#include<cstring>
using namespace std;

class Employ{
    int * age;
    char * name;

    public:
    Employ(){
        age=new int(0);
        name=new char[3];
        
    strcpy(name,"na");
    }
    Employ(int age,char* name){
        this->age=new int(age);
        name=new char[20];
        strcpy(this->name,name);

    }
    void display(){
        cout<<*age<<endl<<name;
    }

    ~Employ(){
        delete age;
        delete []name;
     }
};

int main(){
    char bcs[20]="shrddha";
    Employ e(123,bcs);
    e.display();

    return 0;
 }