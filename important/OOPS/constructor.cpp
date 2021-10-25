#include<iostream>
using namespace std;

class student{
    string name;

    public:
    int age;
    int gender;

    student(string s,int a,int b)
    { //parameterised constructor
        cout<<"parameterised constructor\n";
        name=s;
        age=a;
        gender=b;
    }
    
    student(student &b)
    {   //copy constructor
        cout<<"copy constructor\n";
        name=b.name;
        age=b.age;
        gender=b.gender;
    } 

    student()
    {   //default constructor
        cout<<"default constructor\n";
        name= "sparsh";
        age=19;
        gender=0;
    }

    ~student(){
        cout<<"destructor called"<<"\n";
    }

    void display()
    {
        cout<<"name= "<<name<<endl;
        cout<<"age= "<<age<<endl;
        cout<<"gender= "<<gender<<endl<<endl;
    }
    //oprator overloading
    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }

    void getname(string s)
    {
        name =s;
    }
};

int main()
{
    
    //student a("sparsh",21,0); //filling values using parameterised constructor

    //student a; //calling default constructor

    /*
    student a("urvi",20,1);
    studentc = a; //copy constructor
    */
    student a("urvi",20,1);
    student b;
    student c;
    c.getname("vidha");
    c.age=19;
    c.gender=1;

    //operator overloading
    if(c==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
    return 0;
}