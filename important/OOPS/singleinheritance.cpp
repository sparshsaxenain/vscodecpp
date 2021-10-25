#include<iostream>
using namespace std;

class A
{
    public:
        void func()
        {
            cout<<"Inherited";
        }
};

class B : public A
{

};

int main()
{
    B obj;
    obj.func();
    return 0;
}