#include<iostream>
using namespace std;

class A
{
    public:
        void funca()
        {
            cout<<"fuca\n";
        }
};

class B : public A
{
    public:
        void funcb()
        {
            cout<<"func\n";
        }
};

class C : public B
{

};

int main()
{
    C obj;
    obj.funca();
    obj.funcb();
    return 0;
}