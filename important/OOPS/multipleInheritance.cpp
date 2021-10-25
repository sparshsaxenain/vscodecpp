#include<iostream>
using namespace std;

class A
{
    public:
        void funcA()
        {
            cout<<"Func_A\n";
        }
};

class B
{
    public:
        void funcB()
        {
            cout<<"Func_B\n";
        }
};

class c: public A,public B
{

};

int main()
{
    c obj;
    obj.funcA();
    obj.funcB();
    return 0;
}