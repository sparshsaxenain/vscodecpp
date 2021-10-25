#include<iostream>
using namespace std;

class base{
    public:
        virtual void print()
        {
            cout<<"base print func\n";
        }
        void display()
        {
            cout<<"base display func\n";
        }
};

class derived : public base
{
    public:
        void print()
        {
            cout<<"derived print func\n";
        }
        void display()
        {
            cout<<"derived display func\n";
        }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
    return 0;
}