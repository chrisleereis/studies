
#include<iostream>
using namespace std;
int main()
{
    int monthsLeft=4;
    int startingBalance=0;
    int depositedMoney=0;
    int withdrawnMoney=0;
    int deposit;
    int withdraw;
    
    cout<<"What is the starting balance?"<<endl;
    cin>>startingBalance;
    
    for (monthsLeft > 0; --monthsLeft;){
        deposit=0;
        withdraw=0;
        cout<<"How much deposited into savings for month "<<monthsLeft<<"?"<<endl;
        cin>>deposit;
        depositedMoney+=deposit;
        cout<<"How much withdrawn?"<<endl;
        cin>>withdraw;
        withdrawnMoney+=withdraw;
    }
    //    Starting balance at the beginning of the three-month period
    cout<<"Starting balance was $"<<startingBalance<<endl;
    //    • Total deposits (money amount) made during the three month period
    cout<<"Total deposits equal $"<<depositedMoney<<endl;
    //    • Total withdrawals (money amount) made during the three month period
    cout<<"Total withdrawals equal $"<<withdrawnMoney<<endl;
    //    • Total interest posted to the account during the three months
    
    //    • Final balance .
    cout<<"Final balance is $"<<(startingBalance+depositedMoney)-withdrawnMoney<<endl;
    return 0;
}

