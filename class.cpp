#include<iostream>
#include<cstring>

using namespace std;

class person{
    int age;
    char name[30];

    public:
    void setData(int ag,const char* nm){
        age=ag;
        strcpy(name,nm);

    }
    void display(){
        cout<<"Name="<<name<<endl;
        cout<<"age="<<age;
    }
};



// class Employee{

//     int eid;
//     float salary;
//     char name[50];
// public:
//     void Set_data(int id,float sal,const char* nm){
//         eid=id;
//         salary=sal;
//         strcpy(name,nm);
//     }
//     void display_data(){
//         cout<<"eid="<<eid<<endl;
//         cout<<"salary="<<salary<<endl;
//         cout<<"name="<<name<<endl;

//     }
//     void set_eid(int id){
//         eid=id;
//     }
//      void set_salary(float sal){
//         salary=sal;
//     }
//      void set_name(const char* na){
//         strcpy(name,na);
//     }

//     int get_eid(){
//         return eid;
//     }
//     float get_salary(){
//         return salary;
//     }
//     char* get_name(){
//         return name;
//     }
// };









// class Time{
//     int hour;
//     int minute;
//     int second;

// public:
//     void get_data(int h,int min,int sec){
        
//         hour=h;
//         minute=min;
//         second=sec;

//     }

//     void addtime(){
       
//     }
// }

// int main(){
    // person obj;
    
    // obj.setData(25,"name");
    // obj.display();

    // Employee dat;
    // dat.Set_data(1,550000,"nishant");
    // // dat.set_name("abc");
    
    // char* abc=dat.get_name();
    // char name[20];
    // strcpy(name,abc);
    // cout<<name;

    
//    class time{
//     int hour,min ,sec;
// public :
//     void setdatatime1(int h,int m,int s){
//         hour=h;
//         min=m;
//         sec=s;
//     }
//     void addtime(time t1,time t2){
//      cout<<"Addition of Hour = "<<t1.hour+t2.hour<<endl;
//      cout<<"Addition of min = "<<t1.min+t2.min<<endl;
//      cout<<"Addition of sec = "<<t1.sec+t2.sec<<endl;
//     }
// };

// int main(){
//     time t1;
//     time t2;
//     time t3;
//     t1.setdatatime1(1,15,30);
//     t2.setdatatime1(2,30,16);
//     t3.addtime(t1,t2);
//     return 0;
//     }

    



