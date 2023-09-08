#include <iostream>
using namespace std;
int main()
{
    int pounds;
    cout << "How much do you weigh in pounds?" <<endl;
    cin >> pounds;
    double kilograms = pounds / 2.2;
    cout << "your weight in kilograms is "<< kilograms <<endl;
    
    return 0;
}
