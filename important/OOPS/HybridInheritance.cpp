#include<iostream>
using namespace std;

class A
{
    public:
        void funca(){
            cout<<"funca\n";
        }
};

class B : public A{
    public:
        void funcb()
        {
            cout<<"funcb\n";
        }
};

class C
{
    public:
        void funcc()
        {
            cout<<"funcc\n";
        }
};

class D : public B, public C
{
    public:
        void funcd()
        {
            cout<<"funcd\n";
        }
};

int main()
{
    D obj;
    obj.funca();
    obj.funcb();
    obj.funcc();
    obj.funcd();
    return 0;
}