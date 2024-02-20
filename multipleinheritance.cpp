#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    A()
    {
        a = 0;
        b = 0;
    }
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    A(A &k)
    {
        a = k.a;
        b = k.b;
    }
    void displayA()
    {
        cout << "a=" << a << endl
             << "b=" << b << endl;
    }
};

class B
{
protected:
    int c, d;

public:
    B()
    {
        d = 0;
        c = 0;
    }
    B(int d, int c)
    {
        this->d = d;
        this->c = c;
    }
    B(B &k)
    {
        d = k.d;
        c = k.c;
    }
    void displayb()
    {
        cout << "b=" << d << endl
             << "c=" << d << endl;
    }
};

class C : public A, public B
{
    int f, e;

public:
    C()
    {
        f = 0;
        e = 0;
    }
    C(int a, int b, int c, int d, int e, int f) : A(a, b), B(c, d)
    {
        this->f = f;
        this->e = e;
    }
    C(C &k)
    {
        f = k.f;
        e = k.e;
    }
    void displayc()
    {
        displayA();
        displayb();
        cout << "f=" << f << "e=" << e;
    }
};
int main()
{
    C c1(10, 20, 30, 40, 50, 60);
    c1.displayc();
    return 0;
}