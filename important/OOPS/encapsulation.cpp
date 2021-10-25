#include<iostream>
using namespace std;

class a
{
    public:
        int a;

        void funca(){
            cout<<"funca\n";
        }

    private:
        int b;

        void funcb(){
            cout<<"funcb\n";
        }

    protected:
        int c;

        void funcc(){
            cout<<"funcc\n";
        }
};

int main()
{
    a obj;
    obj.funca();
    //obj.funcb();
}