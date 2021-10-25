#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   //initialize/pop_back vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(78);
    v.push_back(50);
    v.push_back(29);
    v.push_back(0);
    v.push_back(10);

    //method 1 to print/iterate vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;

    //method 2 to print/iterate vector
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;

    //method 3 to print/iterate vector
    for(auto element:v)
    {
        cout<<element<<"\t";
    }
    cout<<endl;

    //pop_back
    v.pop_back();
    for(auto element:v)
    {
        cout<<element<<"\t";
    }
    cout<<endl;

    //vector init 2
    vector<int> v2 (3,50);
    for(auto element:v2)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    cout<<"swapped vectors:\n";

    //swap vector
    swap(v,v2);
    for(auto element:v)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    for(auto element:v2)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    cout<<"sorted vector-: \n\n";
    //sort()
    sort(v2.begin(),v2.end());
    for(auto element:v2)
    {
        cout<<element<<"\t";
    }
    cout<<endl;

    pair<int,char> p;
    p.first = 3;
    p.second = 'f';

    cout<<"\n\n\n\n\n\n\n\n\n";
    return 0;
}