#include<bits/stdc++.h>
using namespace std;

class ApnaCollege
{
    public:
        void fun()
        {
            cout<<"no argument\n";
        }

        void fun(int n)
        {
            cout<<"Int argument\n";
        }
        void fun(double d)
        {
            cout<<"double argument";
        }
};

int main()
{
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}