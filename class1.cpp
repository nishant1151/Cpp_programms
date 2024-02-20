#include<iostream>
#include<cstring>
using namespace std;

class time{
    int hour;
    int min;
    int sec;
public :
    void settime1(int h,int m,int s){
        hour=h;
        min=m;
        sec=s;
    }
    void addtime(time t1,time t2){
     cout<<"Addition of Hour = "<<t1.hour+t2.hour<<endl;
     cout<<"Addition of min = "<<t1.min+t2.min<<endl;
     cout<<"Addition of sec = "<<t1.sec+t2.sec<<endl;
    }
};

int main(){
    time tm1;
    time tm2;
    time tm3;
    t1.settime1(1,15,30);
    t2.settime1(2,30,16);
    t3.addtime(t1,t2);
    return 0;
    }