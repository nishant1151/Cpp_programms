#include<iostream>
#include<cstring>

using namespace std;

class Employe{

    int* age;
    char* name;
    public:
    Employe(){
        age=new int(0);
        name=new char[25];
        strcpy(name,"na");
    }

    Employe(int age, char* name){
        // cout<<
        this->age=new int(age);
        this->name=new char[25];
        strcpy(this->name,name);

    }

    Employe(Employe &k){
        cout<<"hello";
        age=k.age;
        cout<<"hii";
        strcpy(name,k.name);
        
    }
    void display(){
        cout<<*age<<endl;
        cout<<name;
    }
    ~Employe(){
        delete age;
        delete[] name;
    }


};

int main(){
    Employe e1(22,"kjsd");
    e1.display();
    // Employe e2(e1);

    // e2.display();


    return 0;
}