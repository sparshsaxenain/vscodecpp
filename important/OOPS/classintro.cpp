#include<iostream>
using namespace std;

class Student{ //private by default
    public:
    string name;
    int age;
    bool gender;

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};

int main()
{
    /*Student a;
    a.name='Urvi';
    a.age=20;
    a.gender=0;*/

    //Array of objects

    Student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].name;
        cin>>a[i].age;
        cin>>a[i].gender;
        cout<<"\n\n";
    }

    for(int i=0;i<3;i++)
    {
        a[i].display();
        cout<<"\n\n";
    }
    return 0;
}