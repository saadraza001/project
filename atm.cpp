#include<iostream>
using namespace std;
class Info
{
    string id;
    double balance=25000;
    int withdraw,deposite,o;

    public:

    void getDetails()
    {
        while (true)
        {
        cout<<endl<<"Enter ID: ";
        cin>>id;
        cout<<endl<<"Total Balance : "<<balance<<endl;
        cout<<endl<<" 1: Check Balance";
        cout<<endl<<" 2: Withdraw";
        cout<<endl<<" 3: Deposit";
        cout<<endl<<" 4: Exit"<<endl;
        cout<<"Select an option: "<<endl;
        cin>>o;

       switch (o)
       {
        case 1:
        cout<<"Check Balance: "<<balance;
        break;

        case 2:
        cout<<"Enter amount to withdraw: ";
        cin>>withdraw;

        if(withdraw<=balance)
        {
            cout<<endl<<"Withdraw Amount = "<<withdraw;
            balance=balance-withdraw;
            cout<<endl<<"Remaining Balance = "<<balance;
        }
        else 
        {
            cout<<"Insufficient Balance";
        }
        break;
       
       case 3:
       cout<<"Enter amount to deposite: ";
       cin>>deposite;
       balance=balance+deposite;
       cout<<endl<<"Balance = "<<balance;
       break;

       default:
        break;

        case 4:
        cout<<"Exiting..."<<endl;
        return;
       }
    }
    }

};
int main()
{
    Info I1;
    I1.getDetails();

    return 0;
}