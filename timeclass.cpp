#include<iostream>

using namespace std;

class Time{

    int* hour;
    int* min;
    int* sec;
    public:
    Time(){
       hour=new int(0);
        min=new int(0);
        sec=new int(0);
    }
    Time(int hour,int min,int sec){
        this->hour=new int(hour);
        this->min=new int(min);
        this->sec=new int(sec);

    }

    void Sethour(int hour){
        *(this->hour)=hour;
    }
    void Setmin(int min){
        *(this->min)=min;
    }
    void Setsec(int sec){
        *(this->sec)=sec;
    }

    int gethour(){
        return *hour;
    }
    int getmin(){
        return *min;
    }
    int getsec(){
        return *sec;
    }
    
    Time addtime(Time t2){
        Time result;
        
        *hour=*hour+*t2.hour;
        *min=*min+*t2.min;
        *sec=*sec+*t2.sec;

        
        

        if(*sec>=60){
            *min=*min+1;
            *sec=*sec-60;
            if(*min>=60){
                *hour=*hour+1;
                cout<<*hour;
                *min=*min-60;

            }
        }
        else if (*min>=60)
        {
            *hour=*hour+1;
            cout<<*hour;
            *min=*min-60;
        }
        
    
        *(result.hour)=*hour;
        *(result.min)=*min;
        *(result.sec)=*sec;

       // cout<<"hour="<<*(result.hour)<<endl<<"min="<<*min<<endl<<"sec="<<*sec;

        return result;

        // cout<<*hour<<endl<<*min<<endl<<*sec;
        
        
    }
    void display(){
        cout<<"hour="<<*hour<<endl<<"min="<<*min<<endl<<"sec="<<*sec;
    // cout<<hour;

    }


    ~Time(){
        delete hour;
        delete min;
        delete sec;
    }
};

int main(){

    Time t1(10,20,10);
    Time t2(20,1,20);
    
    
    // t3.display();
    Time t3 = t1.addtime(t2);
    t3.display();
    // cout<<t.gethour();

    return 0;
}