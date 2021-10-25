#include<iostream>
using namespace std;

class student{
    string name;
    
    public:
    int age;
    bool gender;

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl<<endl;
    }
    //get function
    void getname()
    {
        cout<<name<<endl;
    }

    //setter function
    void setname(string s)
    {
        name = s;
    }
};

int main()
{
    student a[3];
    string s;
    for(int i=0;i<3;i++)
    {
        cout<<"name= ";
        cin>>s;
        a[i].setname(s);
        cout<<"age= ";
        cin>>a[i].age;
        cout<<"gender= ";
        cin>>a[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        a[i].display();
    }
    return 0;
}