#include<iostream>
#include<vector>
using namespace std;
void options(){
    cout<<"************Menu************"<<endl;
    cout<<"Show Balance"<<endl;
    cout<<"Withdraw"<<endl;
    cout<<"Add Money"<<endl;
    cout<<"EXIT"<<endl;
    cout<<"****************************"<<endl;
}
int main()
{   
    int option;
    int balance = 0;
    do{
        options();
        cout<<"Option : ";
        cin>>option;
        system("cls"); // this would clear the terminal everytime a new terminal starts

        switch (option)
        {
        case 1: 
            cout<<"Current Balance: "<<balance<<endl;    
            break;
        case 2:cout<<"Money to Withdraw: ";
            int withdraw;
            cin>>withdraw;
            if(withdraw > balance){
                cout<<"Not enough balance"<<endl;
            }
            else{
                balance-=withdraw;
                cout<<"Current Balance: "<<balance<<endl;
            }
            break;
        case 3: cout<<"Money to add: ";
            int addmoney;
            cin>>addmoney;
            balance+=addmoney;
            cout<<"Current Balance: "<<balance<<endl;
            break;
        case 4:
            cout<<"Your session has ended"<<endl;
        default:
            cout<<"Not a valid option"<<endl;
        }
    }
    while(option != 4);
    return 0;
}