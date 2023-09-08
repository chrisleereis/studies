
#include <iostream>
using namespace std;
int main()
{
    int hours;
    cout << "How many hours did you work?" <<endl;
    cin >> hours;
    double rate;
    cout << "What is your hourly rate?";
    cin >> rate;
    double pay = rate * hours;
    cout << "Your pay for hours worked are "<< pay <<endl;
    
    return 0;
}
