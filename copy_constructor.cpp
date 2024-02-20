#include <iostream>
using namespace std;

class Copy
{
    int *id;
    int *salary;

public:
    Copy(int id, int salary)
    {
        this->id = new int(id);
        this->salary = new int (salary);
    }
    Copy(Copy &c1)
    {
       this->id = c1.id;
        this->salary = c1.salary;
    }
    void display()
    {
        cout << *id << endl<< *salary;
    }
};
int main()
{
    Copy c1(10, 40);
    Copy c2(c1);
    c2.display();
    return 0;
}