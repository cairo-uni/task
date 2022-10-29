#include <iostream>

using namespace std;
class Student
{
string name;
string id;
double gpa;

public:

    Student(string n,string i,double rate)
    {
        name=n; id=i; gpa=rate;
    }

    void print()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<gpa<<endl;
    }
 bool operator<(const Student &);
};
// Operator Overloading:

bool Student:: operator<(const Student &obj)
{
    bool status=true;
    int greaterN;

    if(name.size() >= obj.name.size())   greaterN=name.size();
    else greaterN=obj.name.size();

    for(int i=0;i<greaterN;i++)
    {
         if(name[i] > obj.name[i] ) break;
         else status= false;
    }
    return status;
}
