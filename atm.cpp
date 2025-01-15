#include<iostream>
using namespace std;
class Info
{
    string id;
    double balance=2500000000;
    int withdraw,deposite,o;
    public:

    void getDetails()
    {
        cout<<"Enter ID: ";
        cin>>id;

       switch (o)
       {
       case 1:
        cout<<"Check Balance: "<<balance;
        break;

        case 2:
        cout<<"Enter amount to withdraw: "<<withdraw;
        if(withdraw>=balance)
        {
            cout<<"Insufficient balance";
        }
        break;
       
       case 3:
       cout<<"Enter amount to deposite: "<<deposite;
       break;

       default:
        break;
       }
    }

};
int main()
{
    return 0;
}