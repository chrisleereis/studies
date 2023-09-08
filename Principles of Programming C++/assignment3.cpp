
#include <iostream>
using namespace std;
int main(){
    bool moreBills;
    while (moreBills==true){
        
        //variables declaration
        float maxFreeMinutes;
        float stageOneRate;
        float stageTwoRate;
        char customerType;
        string customerPhoneNumber;
        int minuteUsage;
        int stageOneMinutes;
        int stageTwoMinutes;
        float basePayment;
        float totalCost;
        
        //beginning of the process
        cout<< "Phone Bill Generation Software"<<endl;
        cout<< "Please Enter the Customer Type"<<endl;
        cout<<"(R for Regular, B for Business)"<<endl;
        
        cin>> customerType;
        
        //customer type boolean
        if(customerType == 'R') {
            basePayment=29.99;
            stageOneRate=0.55;
            stageTwoRate=0.88;
            maxFreeMinutes=200;
            
            
        }
        else if (customerType == 'B') {
            basePayment=99.99;
            stageOneRate=0.45;
            stageTwoRate=0.99;
            maxFreeMinutes=600;
            
            
        }
        else {
            cout<<"Invalid selection. Please restart the software and try again."<<endl;
            return 0;
            
        }
        
        cout<<"Please Enter the Customer Phone Number"<<endl;
        cin>> customerPhoneNumber;
        cout<<"Enter the phone usage in minutes"<<endl;
        cin>> minuteUsage;
        
        //determination of costs
        totalCost = basePayment;
        if (minuteUsage >= maxFreeMinutes) {
            minuteUsage = minuteUsage - maxFreeMinutes;
            
            if (minuteUsage >= stageOneMinutes) {
                totalCost = totalCost + (stageOneMinutes * stageOneRate);
                minuteUsage = minuteUsage - stageOneMinutes;
                
                totalCost = totalCost + (minuteUsage * stageTwoRate);
            }
            else {
                totalCost = totalCost + (minuteUsage * stageOneRate);
            }
            
        }
        
        
        //beginning of report
        cout<<"Power Bill for: "<<customerPhoneNumber<<endl;
        
        
        cout<<"Total Minutes Used Past Free Minutes: "<<minuteUsage<<endl;
        cout<<"Monthly base payment: $"<<basePayment<<endl;
        cout<<"Cost for stage 1 minutes: $"<<stageOneRate<<"per minute."<<endl;
        cout<<"Cost for stage 2 minutes: $"<<stageTwoRate<<"per minute."<<endl;
        cout<<"Total Cost: $"<<totalCost<<endl;
        cout<<"More bills? [Y/N]"<<endl;
        
        char moreBillsQ;
        
        cin>>moreBillsQ;
        
        if(moreBillsQ=='Y'){
            moreBills=true;
        }
        else if(moreBillsQ=='N'){
            moreBills==false;
            cout<<"Exiting the program."<<endl;
            return 0;
        }
    }
}

