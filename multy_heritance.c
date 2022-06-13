#include <iostream>

using namespace std;

class A
{
    protected:
        int a;
        int b;
    public:
        A(int c,int d)
        {
            a = c;
            b = d;
        }
        void show()
        {
            cout << a << b;
        }
};

class B 
{
    protected:
        int c;
        int d;
    public:
        B(int a, int b)
        {
            c = a;
            d = b;
        }
        void show()
        {
            cout << c << d;
        }
};

class C : public A, public B
{
    protected:
        int e;
        int f;
    public:
        C(int a,int b,int c,int d,int g,int h) : A(a,b),B(c,d)
        {
            e = g;
            f = h;
        }
        void show()
        {
            A::show();
            B::show();
            cout << e << f;
        }
};

int main()
{
    C obj(1,2,3,4,5,6);
    
    obj.show();
    
}
