#include<iostream>
using namespace std;

class Time{
    int hour,min,sec;
    public:
    Time(){
        hour=0;
        min=0;
        sec=0;


    }
Time(int hour,int min,int sec){
    this->hour=hour;
    this->sec=sec;
    this->min=min;

}
Time operator+(Time t1){
    Time t2;
    t2.hour=t1.hour+hour;
    t2.min=t1.min+min;
    t2.sec=t1.sec+sec;
    return t2;
}


friend void operator<<(ostream &a,Time &t);

};

void operator<<(ostream &a,Time &t){
        cout<<"Hour is = "<<t.hour<<endl;
        cout<<"min is = "<<t.min<<endl;
        cout<<"sec is = "<<t.sec<<endl;

}

int main(){
    Time t1(10,20,30);
    Time t2(30,50,60);
    Time t3=t1+t2;
    cout<<t3;
    return 0;
}