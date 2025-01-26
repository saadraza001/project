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
        cout<<endl<<"Name :"<<name;
        cout<<endl<<"Roll no :"<<roll;
        cout<<endl<<"Marks :"<<marks;
    }
    int getRoll()
    {
        return roll;
    }
};
int main()
{
    Students s1[50];
    int n=0,x;

    while (1)
    {
        cout<<endl<<"1. Enter student details";
        cout<<endl<<"2. Display student details";
        cout<<endl<<"3. Find student by roll number";
        cout<<endl<<"4. Edit student details";
        cout<<endl<<"5. Delete student details";
        cout<<endl<<"6. Exit";
        cout<<endl<<"Enter your choice: ";
        cin>>x;

        if(x==6)
        break;

        switch (x)
        {
            case 1:
            {
                cout<<endl<<"Enter number of students :";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    s1[i].getDetails();
                }
            }
            break;

            case 2:
            {
                for(int i=0;i<n;i++)
                {
                    s1[i].display();
                }
            }
            break;

            case 3:
            {
                cout<<endl<<"Enter roll number to find student: ";
                cin>>x;
                bool found=false;
                for(int i=0;i<n;i++)
                {
                    if(s1[i].getRoll()==x)
                    {
                        s1[i].display();
                        found=true;
                        break;
                    }
                }
                    if(! found)
                    {
                        cout<<endl<<"Student not found"<<endl;
                    }
            }
            break;
            
            case 4:
            {
                cout<<endl<<"Enter roll number to edit student: ";
                cin>>x;
                bool found=false;
                for(int i=0;i<n;i++)
                {
                    if(s1[i].getRoll()==x)
                    {
                        s1[i].getDetails();
                        found=true;
                        break;
                    }
                }
                if(! found)
                {
                    cout<<endl<<"Student not found"<<endl;
                }
            }
            break;

            case 5:
            {
                cout<<endl<<"Enter roll number to delete student: ";
                cin>>x;
                bool found=false;
                for(int i=0;i<n;i++)
                {
                    if(s1[i].getRoll()==x)
                    {
                        for(int j=i;j<n-1;j++)
                        {
                            s1[j]=s1[j+1];
                        }
                        n--;
                        found=true;
                        cout<<"Student deleted Succesfully "<<endl;
                        break;
                    }
                }
                if(!found)
                {
                    cout<<endl<<"Student not found"<<endl;
                }
            }
            break;

            default:
                cout<<"Invalid choice! Please try again ."<<endl;
        }

    }
    return 0;
} 