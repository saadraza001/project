#include<iostream>
using namespace std;
class Students
{
    int roll,marks;
    string name;
    public:

    void getDetails()
    {
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<endl<<"Roll no."<<roll;
        cout<<endl<<"Name"<<name;
        cout<<endl<<"Marks"<<marks;

    }
};
int main()
{
    Students s1;
    s1.getDetails();
    s1.display();
    return 0;
} 