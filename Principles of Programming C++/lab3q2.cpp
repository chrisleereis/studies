
#include <iostream>
using namespace std;
int main()
{
    int fahrenheit;
    cout << "What is the temperature in Fahrenheit?" <<endl;
    cin >> fahrenheit;
    double celsius = (5.0/9) * (fahrenheit - 32);
    cout << "The temperature in Fahrenheit is "<< fahrenheit <<endl;
    cout << "The temperature in Celsius is "<< celsius <<endl;
    
    return 0;
}
