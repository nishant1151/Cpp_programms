#include<iostream>

using namespace std;
class Greet{
    public:
  virtual  void greet_user(int a)
    {
        cout<<"hello"<<a;
    }
};
class user : public Greet{
    public:
    void greet_user(int a){
        cout<<"hii"<<a;
    }
};
int main(){
    Greet * ptr;
    user u;
    ptr=&u;
    ptr->greet_user(10);            
    return 0;
}