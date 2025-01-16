#include<iostream>
using namespace std;
class Students
{
    int roll,marks;
    string name;
    public:

    Students()
    {
        roll= 0;
        marks= 0;
        name= "";

    }

    Students(int roll,int marks,string name)
    {
        this ->roll= roll;
        this ->marks= marks;
        this->name=name;
    }

    void getDetails()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<endl<<"Name"<<name;
        cout<<endl<<"Roll no."<<roll;
        cout<<endl<<"Marks"<<marks;
    }
};
int main()
{
    Students s1[50];
    int n=0,x;

    return 0;
} 