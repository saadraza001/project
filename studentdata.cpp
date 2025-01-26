#include<iostream>
using namespace std;

class Students
{
    string name;
    int rollno;
    float marks;
    char grade;
    public:

Students (string n,int r,float m,char g) 
{
    rollno = r;
    name = n;
    marks = m;
    grade = g;

}

    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

};
int main()
{
    Students s1,s2;
    s1.getdata();
    s1.display();
    s2.getdata();
    s2.display();
    return 0;
}